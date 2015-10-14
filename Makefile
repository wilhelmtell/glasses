PREFIX := ${HOME}/usr/
OBJ := $(patsubst %.cc,%.o,$(wildcard src/*.cc src/detail/*.cc))
TEST_OBJ := $(patsubst %.cc,%.o,$(wildcard test/*.cc))

.PHONY: clean dist install uninstall

src/lib${OUT_PREFIX}glasses${OUT_SUFFIX}.a: ${OBJ}
	${AR} ${ARFLAGS} $@ $^

check: test/check_glasses
	test/check_glasses && touch $@

test/check_glasses: src/${OUT_PREFIX}libglasses${OUT_SUFFIX}.a ${TEST_OBJ}
	${LINK.cc} ${OUTPUT_OPTION} $^

dist: check
	git archive --format=zip --prefix=glasses_$(shell git describe --dirty)/ master >glasses_$(shell git describe --dirty).zip
	git archive --format=tar --prefix=glasses_$(shell git describe --dirty)/ master |gzip -9 >glasses_$(shell git describe --dirty).tar.gz
	git archive --format=tar --prefix=glasses_$(shell git describe --dirty)/ master |xz -9 >glasses_$(shell git describe --dirty).tar.xz

clean:
	${RM} ${OBJ}

%.dep: %.cc
	${COMPILE.cc} -MG -MM -MP -MT$@ -MT$(<:.cc=.o) $< >$@

install: check
	install -d -m755 $(addprefix $(abspath ${PREFIX})/,include/glasses/detail lib)
	install -m644 $(wildcard src/detail/*.hh src/detail/*.tcc) $(abspath ${PREFIX})/include/glasses/detail/
	install -m644 $(wildcard src/*.hh src/*.tcc) $(abspath ${PREFIX})/include/glasses/
	install -m644 src/lib${OUT_PREFIX}glasses${OUT_SUFFIX}.a $(abspath ${PREFIX})/lib/

uninstall:
	rm -f $(abspath ${PREFIX})/lib/lib${OUT_PREFIX}glasses${OUT_SUFFIX}.a
	rm -f $(addprefix $(abspath ${PREFIX})/include/glasses/,$(notdir $(wildcard src/*.hh src/*.tcc)))
	rm -f $(addprefix $(abspath ${PREFIX})/include/glasses/detail/,$(notdir $(wildcard src/detail/*.hh src/detail/*.tcc)))
	rmdir -p $(addprefix $(abspath ${PREFIX})/,lib include/glasses/detail) 2>/dev/null || true

-include ${OBJ:.o=.dep} ${TEST_OBJ:.o=.dep}
