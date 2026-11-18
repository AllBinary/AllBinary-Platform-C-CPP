#!/usr/bin/env bash

# Compiles the C23 sources the C23 converter generated (Class.h and Class.c for each Java class) with Cygwin gcc.
# The headers are copied to <output>/include and the objects archived to <output>/lib/lib<artifactId>.a so dependent
# projects find them in this project's jar under META-INF/c23.
# Arguments: source_dir output_dir object_dir dependency_dir runtime_dir compiler "flags" artifactId fail_on_error

set -uo pipefail

export PATH="/usr/local/bin:/usr/bin:/bin:$PATH"

source_dir="$(cygpath -u "$1")"
output_dir="$(cygpath -u "$2")"
object_dir="$(cygpath -u "$3")"
dependency_dir="$(cygpath -u "$4")"
runtime_dir="$(cygpath -u "$5")"
compiler="$6"
read -r -a compiler_flags <<< "$7"
# A Java subclass is a struct with its superclass first (base) so passing it where the superclass is wanted (Java upcast)
# is a C pointer conversion. GCC 14 makes that an error by default.
compiler_flags+=(-Wno-error=incompatible-pointer-types)
artifact="$8"
fail_on_error="${9:-true}"

if [ ! -d "$source_dir" ]; then
    echo "No C23 sources: $source_dir"
    exit 0
fi

rm -rf "$output_dir" "$object_dir"
mkdir -p "$output_dir/include" "$output_dir/lib" "$object_dir"

# Headers of this project for the dependent projects
(cd "$source_dir" && find . -type f -name '*.h' -print0 | xargs -0 -r cp --parents -t "$output_dir/include")

objects=()
failures=()
while IFS= read -r -d '' source; do
    relative_path="${source#"$source_dir"/}"
    object="$object_dir/${relative_path%.c}.o"
    mkdir -p "$(dirname "$object")"
    if "$compiler" "${compiler_flags[@]}" -I"$source_dir" -I"$dependency_dir/include" -I"$runtime_dir" -c "$source" -o "$object"; then
        objects+=("$object")
    else
        failures+=("$relative_path")
    fi
done < <(find "$source_dir" -type f -name '*.c' -print0 | sort -z)

# The hand written runtime (allbinary_java.c and java/...) is compiled too so a project checks the runtime it uses.
# Its objects are not archived: the program links the runtime once.
while IFS= read -r -d '' source; do
    relative_path="${source#"$runtime_dir"/}"
    object="$object_dir/runtime/${relative_path%.c}.o"
    mkdir -p "$(dirname "$object")"
    if ! "$compiler" "${compiler_flags[@]}" -I"$runtime_dir" -c "$source" -o "$object"; then
        failures+=("runtime/$relative_path")
    fi
done < <(find "$runtime_dir" -type f -name '*.c' -print0 | sort -z)

echo "C23 sources compiled: ${#objects[@]}"
if [ "${#objects[@]}" -gt 0 ]; then
    ar rcs "$output_dir/lib/lib$artifact.a" "${objects[@]}"
fi

if [ "${#failures[@]}" -gt 0 ]; then
    echo "C23 build failures: ${#failures[@]}" >&2
    printf '  %s\n' "${failures[@]}" >&2
    if [ "$fail_on_error" = "true" ]; then
        exit 1
    fi
fi
exit 0
