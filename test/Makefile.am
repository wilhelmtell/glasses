check_PROGRAMS = check_sdl_toolset
check_sdl_toolset_SOURCES = dummy.cc main.cc
check_sdl_toolset_LDADD = ../src/libsdl_toolset.a
AM_CPPFLAGS = ${BOOST_CPPFLAGS}
AM_LDFLAGS = ${BOOST_LDFLAGS}

check: check-am
	./$(check_PROGRAMS)
