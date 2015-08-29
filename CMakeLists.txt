cmake_minimum_required(VERSION 3.2.2)
project(sdl_toolset VERSION 0.0.0.1)

add_library(sdl_toolset_lib
            src/height_fwd.hh src/height.hh src/height.cc
            src/point_fwd.hh src/point.hh src/point.cc
            src/rectangle_fwd.hh src/rectangle.hh src/rectangle.cc
            src/renderer_creation_error.hh src/renderer_creation_error.cc
            src/sdl_renderer.hh src/sdl_renderer.cc
            src/sdl_surface_fwd.hh src/sdl_surface.hh src/sdl_surface.cc
            src/sdl_system.hh src/sdl_system.cc
            src/sdl_system_init_error.hh src/sdl_system_init_error.cc
            src/sdl_texture_creation_error.hh src/sdl_texture_creation_error.cc
            src/sdl_texture_fwd.hh src/sdl_texture.hh src/sdl_texture.cc
            src/sdl_ttf_font_fwd.hh src/sdl_ttf_font.hh src/sdl_ttf_font.cc
            src/sdl_ttf_font_open_error.hh src/sdl_ttf_font_open_error.cc
            src/sdl_ttf_system_fwd.hh src/sdl_ttf_system.hh src/sdl_ttf_system.cc
            src/sdl_ttf_system_init_error.hh src/sdl_ttf_system_init_error.cc
            src/sdl_window_fwd.hh src/sdl_window.hh src/sdl_window.cc
            src/width_fwd.hh src/width.hh src/width.cc
            src/window_creation_error.hh src/window_creation_error.cc)
add_executable(check_sdl_toolset test/main.cc
               test/height.cc
               test/point.cc
               test/point_crossing.cc
               test/point_inside.cc
               test/point_io.hh test/point_io.tcc
               test/point_outside.cc
               test/rectangle.cc
               test/rectangle_bottom_right.cc
               test/rectangle_intersect.cc
               test/rectangle_outside.cc
               test/width.cc)

configure_file(
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
)

set_target_properties(sdl_toolset_lib PROPERTIES
                      OUTPUT_NAME sdl_toolset)
set_target_properties(check_sdl_toolset PROPERTIES OUTPUT_NAME check_sdl_toolset)
set_target_properties(sdl_toolset_lib check_sdl_toolset PROPERTIES
                      CXX_STANDARD 14
                      CXX_STANDARD_REQUIRED true
                      CXX_EXTENSIONS false)
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -pedantic -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

include_directories("${PROJECT_BINARY_DIR}")

target_link_libraries(check_sdl_toolset sdl_toolset_lib)

install(TARGETS sdl_toolset_lib DESTINATION lib)
