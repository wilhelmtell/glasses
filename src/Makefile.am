bin_PROGRAMS = sdl_toolset
sdl_toolset_SOURCES = main.cc
sdl_toolset_LDADD = libsdl_toolset.a
AM_CPPFLAGS = ${BOOST_CPPFLAGS}
AM_CXXFLAGS = ${SDL2_CFLAGS} ${SDL2_TTF_CFLAGS}
AM_LDFLAGS = ${BOOST_LDFLAGS} ${SDL2_LIBS} ${SDL2_TTF_LIBS}

noinst_LIBRARIES = libsdl_toolset.a
libsdl_toolset_a_SOURCES = dummy.cc dummy.hh \
                           height_fwd.hh height.hh height.cc \
                           point_fwd.hh point.hh point.cc \
                           rectangle_fwd.hh rectangle.hh rectangle.cc \
                           renderer_creation_error.hh renderer_creation_error.cc \
                           sdl.hh sdl.cc \
                           sdl_renderer.hh sdl_renderer.cc \
                           sdl_surface_fwd.hh sdl_surface.hh sdl_surface.cc \
                           sdl_system.hh sdl_system.cc \
                           sdl_system_init_error.hh sdl_system_init_error.cc \
                           sdl_texture_creation_error.hh sdl_texture_creation_error.cc \
                           sdl_texture_fwd.hh sdl_texture.hh sdl_texture.cc \
                           sdl_ttf_font_fwd.hh sdl_ttf_font.hh sdl_ttf_font.cc \
                           sdl_ttf_font_open_error.hh sdl_ttf_font_open_error.cc \
                           sdl_ttf_system.hh sdl_ttf_system.cc \
                           sdl_ttf_system_fwd.hh sdl_ttf_system_init_error.hh sdl_ttf_system_init_error.cc \
                           width_fwd.hh width.hh width.cc
