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
jsinterop_include_dir="$(cygpath -u "$9")"
include_overlay="$object_dir/include-overlay"

mkdir -p "$object_dir" "$archive_dir"
find "$object_dir" -type f -delete
mkdir -p "$include_overlay"
cp -R "$include_dir"/. "$include_overlay"/
cp -R "$jsinterop_include_dir"/. "$include_overlay"/
cp -R "$source_dir"/. "$include_overlay"/

objects=()
while IFS= read -r -d '' source; do
    relative_path="${source#"$source_dir"/}"
    object="$object_dir/${relative_path%.*}.o"
    relative_include_dir="$include_overlay/$(dirname "$relative_path")"
    mkdir -p "$(dirname "$object")"
    mkdir -p "$relative_include_dir"

    case "$source" in
        *.c)
            gcc -std="$c_standard" "${compiler_flags[@]}" -I"$include_overlay" -I"$source_dir" -I"$include_dir" -iquote "$relative_include_dir" -MMD -MP -c "$source" -o "$object"
            ;;
        *)
            g++ -std="$cpp_standard" "${compiler_flags[@]}" -I"$include_overlay" -I"$source_dir" -I"$include_dir" -iquote "$relative_include_dir" -MMD -MP -c "$source" -o "$object"
            ;;
    esac

    objects+=("$object")
done < <(find "$source_dir" -type f \( -name '*.c' -o -name '*.cc' -o -name '*.cpp' -o -name '*.cxx' \) -print0)

rm -f "$archive"
ar rcs "$archive" "${objects[@]}"