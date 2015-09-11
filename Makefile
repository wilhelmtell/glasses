OBJ := $(patsubst %.cc,%.o,$(wildcard src/*.cc src/dim/*.cc src/detail/*.cc))
TEST_OBJ := $(patsubst %.cc,%.o,$(wildcard test/*.cc test/dim/*.cc))

.PHONY: check clean

libglasses.a: ${OBJ}
	${AR} ${ARFLAGS} $@ $^

check: tests_passed

tests_passed: check_glasses
	./check_glasses && touch $@

check_glasses: libglasses.a ${TEST_OBJ}
	${LINK.cc} ${OUTPUT_OPTION} $^

clean:
	${RM} ${OBJ}

%.dep: %.cc
	${COMPILE.cc} -MG -MM -MP -MT$@ -MT$(<:.cc=.o) $< >$@

-include ${OBJ:.o=.dep} ${TEST_OBJ:.o=.dep}
