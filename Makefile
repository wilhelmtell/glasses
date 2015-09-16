OBJ := $(patsubst %.cc,%.o,$(wildcard src/*.cc src/detail/*.cc))
TEST_OBJ := $(patsubst %.cc,%.o,$(wildcard test/*.cc))

.PHONY: clean

src/lib${OUT_PREFIX}glasses${OUT_SUFFIX}.a: ${OBJ}
	${AR} ${ARFLAGS} $@ $^

check: test/check_glasses
	test/check_glasses && touch $@

test/check_glasses: src/${OUT_PREFIX}libglasses${OUT_SUFFIX}.a ${TEST_OBJ}
	${LINK.cc} ${OUTPUT_OPTION} $^

clean:
	${RM} ${OBJ}

%.dep: %.cc
	${COMPILE.cc} -MG -MM -MP -MT$@ -MT$(<:.cc=.o) $< >$@

-include ${OBJ:.o=.dep} ${TEST_OBJ:.o=.dep}
