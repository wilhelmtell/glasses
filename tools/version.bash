VERSION_REGEX='^v[0-9]\+\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\(-[0-9]\+\)\?\(-g[0-9a-f]\+\)\?\(-dirty\)\?$'
MAJOR_REGEX='^v\([0-9]\+\).*'  # \1
MINOR_REGEX='^v[0-9]\+\(\.\([0-9]\+\)\)\?.*'  # \2
PATCH_REGEX='^v[0-9]\+\(\.[0-9]\+\)\?\(\.\([0-9]\+\)\)\?.*'  # \3
TWEAK_REGEX='^v[0-9]\+\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\(\.\([0-9]\+\)\)\?.*'  # \4
DISTANCE_REGEX='^v[0-9]\+\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\(-\([0-9]\+\)\)\?.*'  # \5
SHA_REGEX='^v[0-9]\+\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\(-[0-9]\+\)\?\(-g\([0-9a-f]\+\)\)\?.*'  # \6
DIRTY_REGEX='^v[0-9]\+\(\.[0-9]\+\)\?\(\.[0-9]\+\)\?\.\([0-9]\+\)\?\(-[0-9]\+\)\?\(-g[0-9a-f]\+\)\?\(-\(dirty\)\)\?$'  # \7

raw() {
  git describe --dirty
}

major() {
  raw |sed "s/$MAJOR_REGEX/\\1/"
}

minor() {
  raw |sed "s/$MINOR_REGEX/\\2/"
}

patch() {
  raw |sed "s/$PATCH_REGEX/\\3/"
}

tweak() {
  raw |sed "s/$TWEAK_REGEX/\\4/"
}

distance() {
  raw |sed "s/$DISTANCE_REGEX/\\5/"
}

sha() {
  raw |sed "s/$SHA_REGEX/\\6/"
}

dirty() {
  raw |sed "s/$DIRTY_REGEX/\\7/"
}

fullsha() {
  git rev-parse HEAD
}

version() {
  local cmd=${1:-raw}
  $cmd
}

version "$@"
