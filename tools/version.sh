#!/bin/sh
## version.sh - output version number to stdout

# VERSION_REGEX: grep/sed regex capturing version number into \1.
VERSION_REGEX='^v\([0-9]\+\(\.[0-9]\+\)*\)$'

# GIT_DESCRIBE: dynamic-programming capture git-describe output
#
#               git-describe ought to return one line, but i'm scared of all
#               hell breaking loose if it doesn't... so defend against that.
GIT_DESCRIBE="$(git describe --dirty 2>/dev/null |head -n1)"

# first, sanity-check.

# git-describe output must match $VERSION_REGEX
echo "$GIT_DESCRIBE" |grep -q "$VERSION_REGEX" || exit 1

# now let's get it over with.
echo "$GIT_DESCRIBE" |sed "s/$VERSION_REGEX/\1/"
