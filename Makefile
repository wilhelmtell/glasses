OBJ := $(patsubst %.cc,%.o,$(wildcard src/*.cc src/dim/*.cc src/detail/*.cc))
TEST_OBJ := $(patsubst %.cc,%.o,$(wildcard test/*.cc test/dim/*.cc))

.PHONY: check clean

all: src/libglasses.a(${OBJ})

check: tests_passed

tests_passed: test/check_glasses
	test/check_glasses && touch $@

test/check_glasses: src/libglasses.a(${OBJ}) ${TEST_OBJ}
	${LINK.cc} ${OUTPUT_OPTION} $^

clean:
	${RM} ${OBJ}

%.dep: %.cc
	${COMPILE.cc} -MG -MM -MP -MT$@ -MT$(<:.cc=.o) $< >$@

-include ${OBJ:.o=.dep} ${TEST_OBJ:.o=.dep}
