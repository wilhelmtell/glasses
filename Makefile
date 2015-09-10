prefix ?= ${HOME}/usr/local/stow/$(notdir ${CURDIR})

.PHONY: all check clean distclean

## user-configurable data
VERSION := $(shell bash tools/version.bash)
ALL_SOURCE_FILES := $(shell find src test -name '*.hh' -o -name '*.tcc' -o -name '*.cc')
LIBRARIES := boost_signals
CXXFLAGS := ${CXXFLAGS} -std=c++14

## shouldn't need user tweaking
LIBGLASSES_SOURCE_FILES := $(filter src/%,${ALL_SOURCE_FILES})
LIBGLASSES_TRANSLATION_UNITS := $(filter %.cc,${LIBGLASSES_SOURCE_FILES})
LIBGLASSES_OBJECT_FILES := ${LIBGLASSES_TRANSLATION_UNITS:.cc=.o}
LIBGLASSES_DEPENDENCY_FILES := ${LIBGLASSES_TRANSLATION_UNITS:.cc=.dep}
CHECK_GLASSES_SOURCE_FILES := $(filter test/%,${ALL_SOURCE_FILES})
CHECK_GLASSES_TRANSLATION_UNITS := $(filter %.cc,${CHECK_GLASSES_SOURCE_FILES})
CHECK_GLASSES_OBJECT_FILES := ${CHECK_GLASSES_TRANSLATION_UNITS:.cc=.o}
CHECK_GLASSES_DEPENDENCY_FILES := ${CHECK_GLASSES_TRANSLATION_UNITS:.cc=.dep}
CHECK_GLASSES_MAIN_SOURCE_FILE := $(filter test/main.cc,${CHECK_GLASSES_TRANSLATION_UNITS})
CHECK_GLASSES_MAIN_OBJECT_FILE := ${CHECK_GLASSES_MAIN_SOURCE_FILE:.cc=.o}
LDFLAGS := ${LDFLAGS} $(foreach L,${LIBRARIES},-l$L)

all: libglasses.a

libglasses.a: ${LIBGLASSES_OBJECT_FILES}
	ar rcs $@ $^

check: tests_passed

tests_passed: check_glasses
	./check_glasses && touch tests_passed

check_glasses: ${CHECK_GLASSES_OBJECT_FILES} libglasses.a
	${LINK.cc} libglasses.a ${CHECK_GLASSES_OBJECT_FILES} ${OUTPUT_OPTION}

clean:
	rm -f ${LIBGLASSES_OBJECT_FILES} ${LIBGLASSES_DEPENDENCY_FILES} ${CHECK_GLASSES_OBJECT_FILES} ${CHECK_GLASSES_DEPENDENCY_FILES}

distclean: clean
	rm -f libglasses.a check_glasses

%.dep: %.cc
	${CXX} ${CPPFLAGS} ${CXXFLAGS} -MG -MM -MP -MT$@ -MT${<:.cc=.o} $< >$@

ifneq "${MAKECMDGOALS}" "clean"
  ifneq "${MAKECMDGOALS}" "distclean"
    -include ${LIBGLASSES_DEPENDENCY_FILES} ${CHECK_GLASSES_DEPENDENCY_FILES}
  endif
endif

dist: glasses-${VERSION}.tar.gz glasses-${VERSION}.tar.xz glasses-${VERSION}.zip

glasses-${VERSION}.tar.gz:
	git archive --format=tar --prefix=glasses/ HEAD |gzip -9 >glasses-${VERSION}.tar.gz

glasses-${VERSION}.tar.xz:
	git archive --format=tar --prefix=glasses/ HEAD |xz -9 >glasses-${VERSION}.tar.xz

glasses-${VERSION}.zip:
	git archive --format=zip --prefix=glasses-${VERSION}/ HEAD >glasses-${VERSION}.zip
