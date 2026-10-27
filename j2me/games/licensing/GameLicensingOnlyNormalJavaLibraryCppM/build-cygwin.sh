#!/usr/bin/env bash

set -euo pipefail

export PATH="/usr/local/bin:/usr/bin:/bin:$PATH"

source_dir="$(cygpath -u "$1")"
object_dir="$(cygpath -u "$2")"
archive_dir="$(cygpath -u "$3")"
archive="$archive_dir/lib$4.a"
c_standard="$5"
cpp_standard="$6"
read -r -a compiler_flags <<< "$7"
include_dir="$(cygpath -u "$8")"
relative_include_dir="$include_dir/java/lang"

# Arguments after the runtime include path are extra include dirs, e.g. target/native/dependency-include
# (headers unpacked from the dependencies' -sources jars). Missing dirs are skipped.
extra_includes=()
for extra_include_dir in "${@:9}"; do
    extra_include_dir="$(cygpath -u "$extra_include_dir")"
    if [ -d "$extra_include_dir" ]; then
        extra_includes+=(-I"$extra_include_dir")
    fi
done

mkdir -p "$object_dir" "$archive_dir"
find "$object_dir" -type f -delete

objects=()
while IFS= read -r -d '' source; do
    relative_path="${source#"$source_dir"/}"
    object="$object_dir/${relative_path%.*}.o"
    mkdir -p "$(dirname "$object")"

    case "$source" in
        *.c)
            gcc -std="$c_standard" "${compiler_flags[@]}" -I"$source_dir" -I"$include_dir" "${extra_includes[@]}" -iquote "$relative_include_dir" -MMD -MP -c "$source" -o "$object"
            ;;
        *)
            g++ -std="$cpp_standard" "${compiler_flags[@]}" -I"$source_dir" -I"$include_dir" "${extra_includes[@]}" -iquote "$relative_include_dir" -MMD -MP -c "$source" -o "$object"
            ;;
    esac

    objects+=("$object")
done < <(find "$source_dir" -type f \( -name '*.c' -o -name '*.cc' -o -name '*.cpp' -o -name '*.cxx' \) -print0)

rm -f "$archive"
ar rcs "$archive" "${objects[@]}"