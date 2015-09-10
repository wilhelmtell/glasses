VERSION_REGEX='^v[0-9]+(.[0-9]+)?(.[0-9]+)?(.[0-9]+)?(-[0-9]+)?(-g[0-9a-f]+)?(-dirty)?$'
MAJOR_REGEX='^v([0-9]+).*'
MINOR_REGEX='^v[0-9]+(?:\.([0-9]+))?.*'
PATCH_REGEX='^v[0-9]+(?:\.[0-9]+)?(?:\.([0-9]+))?.*'
TWEAK_REGEX='^v[0-9]+(?:\.[0-9]+)?(?:\.[0-9]+)?(?:\.([0-9]+))?.*'
DISTANCE_REGEX='^v[0-9]+(?:\.[0-9]+)?(?:\.[0-9]+)?(?:\.[0-9]+)?(?:-([0-9]+))?.*'
SHA_REGEX='^v[0-9]+(?:\.[0-9]+)?(?:\.[0-9]+)?(?:\.[0-9]+)?(?:-[0-9]+)?(?:-g([0-9a-f]+))?.*'
DIRTY_REGEX='^v[0-9]+(?:\.[0-9]+)?(?:\.[0-9]+)?(?:\.[0-9]+)?(?:-[0-9]+)?(?:-g[0-9a-f]+)?(?:-(dirty))?$'

raw() {
  git describe --dirty
}

major() {
  raw |perl -pe "s/$MAJOR_REGEX/\\1/"
}

minor() {
  raw |perl -pe "s/$MINOR_REGEX/\\1/"
}

patch() {
  raw |perl -pe "s/$PATCH_REGEX/\\1/"
}

tweak() {
  raw |perl -pe "s/$TWEAK_REGEX/\\1/"
}

distance() {
  raw |perl -pe "s/$DISTANCE_REGEX/\\1/"
}

sha() {
  raw |perl -pe "s/$SHA_REGEX/\\1/"
}

dirty() {
  raw |perl -pe "s/$DIRTY_REGEX/\\1/"
}

fullsha() {
  git rev-parse HEAD
}

version() {
  local cmd=${1:-raw}
  $cmd
}

version "$@"
