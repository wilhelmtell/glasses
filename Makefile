PREFIX := ${HOME}/usr/
DEBUG := 1
TITLE := Glasses
OUT_TITLE := Glasses
OUT := glasses
MAIN_OBJ := src/${OUT}.o
LIB_OBJ := $(filter-out ${MAIN_OBJ},$(patsubst %.cc,%.o,$(wildcard src/*.cc src/detail/*.cc)))
DEP := ${LIB_OBJ:.o=.dep} ${MAIN_OBJ:.o=.dep}
TEST_OUT := check_${OUT}
TEST_MAIN_OBJ := test/${TEST_OUT}.o
TEST_LIB_OBJ := $(filter-out ${TEST_MAIN_OBJ},$(patsubst %.cc,%.o,$(wildcard test/*.cc test/detail/*.cc)))
TEST_DEP := ${TEST_LIB_OBJ:.o=.dep} ${TEST_MAIN_OBJ:.o=.dep}
VERSION := $(shell git describe --dirty 2>/dev/null || echo v0)
CXX_STD := 14
ifeq (${DEBUG},1)
  CXXFLAGS := -std=c++${CXX_STD} -Wall -g -O0
  OUT_SUFFIX := d
else
  CXXFLAGS := -std=c++${CXX_STD} -O2
endif
PKGCONFIG_VERSION := 0.3
ARFLAGS := r

.PHONY: all check install uninstall dist clean distclean clean-out clean-test distclean-out distclean-test

all: check

check: test/${TEST_OUT}
	./$^ --reporter=compact

clean: clean-test clean-out

distclean: distclean-test distclean-out

ifneq "${MAKECMDGOALS}" "clean"
ifneq "${MAKECMDGOALS}" "distclean"
  -include ${DEP} ${TEST_DEP}
endif
endif

%.dep: %.cc src/static_config.hh
	${COMPILE.cc} -MG -MM -MP -MT$@ -MT${<:.cc=.o} $< >$@

clean-out:
	${RM} -f src/static_config.hh src/lib${OUT_PREFIX}${OUT}${OUT_SUFFIX}.a ${MAIN_OBJ} ${LIB_OBJ} ${DEP}

clean-test:
	${RM} -f test/${TEST_OUT} ${TEST_MAIN_OBJ} ${TEST_LIB_OBJ} ${TEST_DEP}

distclean-out: clean-out
	${RM} -rf ${OUT} ${OUT}.pc

distclean-test: clean-test
	${RM} -f ${TEST_OUT}

src/static_config.hh: src/static_config.hh.in
	perl -pe "s/{PACKAGE_TITLE}/${TITLE}/; s/{PACKAGE_NAME}/${OUT}/; s/{PACKAGE_VERSION}/${VERSION}/; s/{PACKAGE_STRING}/${TITLE} ${VERSION}/;" <$^ >$@

src/lib${OUT_REFIX}${OUT}${OUT_SUFFIX}.a: ${LIB_OBJ}
	${AR} ${ARFLAGS} $@ $^

test/${TEST_OUT}: src/lib${OUT_PREFIX}${OUT}${OUT_SUFFIX}.a ${TEST_LIB_OBJ} ${TEST_MAIN_OBJ}
	${LINK.cc} ${LDLIBS} ${OUTPUT_OPTION} $^

install: ${OUT}.pc
	install -d -m755 $(addprefix $(abspath ${PREFIX})/,include/${OUT}/detail lib/pkgconfig)
	install -m644 $(wildcard src/detail/*.hh src/detail/*.tcc) $(abspath ${PREFIX})/include/${OUT}/detail/
	install -m644 $(wildcard src/*.hh src/*.tcc) $(abspath ${PREFIX})/include/${OUT}/
	install -m644 src/lib${OUT_PREFIX}${OUT}${OUT_SUFFIX}.a $(abspath ${PREFIX})/lib/
	install -m644 ${OUT}.pc $(abspath ${PREFIX})/lib/pkgconfig/

uninstall:
	${RM} -f $(abspath ${PREFIX})/lib/pkgconfig/${OUT}.pc
	${RM} -f $(abspath ${PREFIX})/lib/lib${OUT_PREFIX}${OUT}${OUT_SUFFIX}.a
	${RM} -f $(addprefix $(abspath ${PREFIX})/include/${OUT}/,$(notdir $(wildcard src/*.hh src/*.tcc)))
	${RM} -f $(addprefix $(abspath ${PREFIX})/include/${OUT}/detail/,$(notdir $(wildcard src/detail/*.hh src/detail/*.tcc)))
	${RM} -p $(addprefix $(abspath ${PREFIX})/,lib/pkgconfig include/${OUT}/detail) 2>/dev/null || true

${OUT}.pc: ${OUT}.pc.in
	perl -pe "s|^prefix=.*|prefix=${PREFIX}|; s|^Version:.*|Version: ${PKGCONFIG_VERSION}|" $^ >$@

dist:
	git archive --format=zip --prefix=${OUT}_$(shell git describe --dirty)/ master >${OUT}_$(shell git describe --dirty).zip
	git archive --format=tar --prefix=${OUT}_$(shell git describe --dirty)/ master |gzip -9 >${OUT}_$(shell git describe --dirty).tar.gz
	git archive --format=tar --prefix=${OUT}_$(shell git describe --dirty)/ master |xz -9 >${OUT}_$(shell git describe --dirty).tar.xz
