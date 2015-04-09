check_PROGRAMS = check_sdl_toolset
check_sdl_toolset_SOURCES = main.cc \
                            height.cc \
                            point.cc \
                            point_crossing.cc \
                            point_io.hh point_io.tcc \
                            point_outside.cc \
                            rectangle.cc \
                            rectangle_bottom_right.cc \
                            rectangle_intersect.cc \
                            rectangle_outside.cc \
                            width.cc
check_sdl_toolset_LDADD = ../src/libsdl_toolset.a
AM_CPPFLAGS = ${BOOST_CPPFLAGS}
AM_CXXFLAGS = ${SDL2_CFLAGS} ${SDL2_TTF_CFLAGS}
AM_LDFLAGS = ${BOOST_LDFLAGS} ${SDL2_LIBS} ${SDL2_TTF_LIBS}

check: check-am
	./$(check_PROGRAMS)
