cmake_minimum_required(VERSION 3.2.2)
project(sdl_toolset VERSION 0.0.0.1)

add_library(sdl_toolset_lib
            src/audio_subsystem_fwd.hh src/audio_subsystem.hh src/audio_subsystem.cc
            src/detail/system_fwd.hh src/detail/system.hh src/detail/system.cc
            src/events_subsystem_fwd.hh src/events_subsystem.hh src/events_subsystem.cc
            src/gamecontroller_subsystem_fwd.hh src/gamecontroller_subsystem.hh src/gamecontroller_subsystem.cc
            src/haptic_subsystem_fwd.hh src/haptic_subsystem.hh src/haptic_subsystem.cc
            src/height_fwd.hh src/height.hh src/height.cc
            src/joystick_subsystem_fwd.hh src/joystick_subsystem.hh src/joystick_subsystem.cc
            src/logical_cleanup_fwd.hh src/logical_cleanup.hh src/logical_cleanup.cc
            src/logical_scope_guard_fwd.hh src/logical_scope_guard.hh src/logical_scope_guard.tcc src/logical_scope_guard.cc
            src/minimal_system_fwd.hh src/minimal_system.hh src/minimal_system.cc
            src/point_fwd.hh src/point.hh src/point.cc
            src/rectangle_fwd.hh src/rectangle.hh src/rectangle.cc
            src/renderer_creation_error.hh src/renderer_creation_error.cc
            src/renderer_fwd.hh src/renderer.hh src/renderer.cc
            src/subsystem_init_error.hh src/subsystem_init_error.cc
            src/surface_creation_error_fwd.hh src/surface_creation_error.hh src/surface_creation_error.cc
            src/surface_fwd.hh src/surface.hh src/surface.cc
            src/system_fwd.hh src/system.hh src/system.cc
            src/system_init_error.hh src/system_init_error.cc
            src/texture_creation_error_fwd.hh src/texture_creation_error.hh src/texture_creation_error.cc
            src/texture_fwd.hh src/texture.hh src/texture.cc
            src/timer_subsystem_fwd.hh src/timer_subsystem.hh src/timer_subsystem.cc
            src/ttf_font_fwd.hh src/ttf_font.hh src/ttf_font.cc
            src/ttf_font_open_error.hh src/ttf_font_open_error.cc
            src/ttf_system_fwd.hh src/ttf_system.hh src/ttf_system.cc
            src/ttf_system_init_error.hh src/ttf_system_init_error.cc
            src/video_subsystem_fwd.hh src/video_subsystem.hh src/video_subsystem.cc
            src/width_fwd.hh src/width.hh src/width.cc
            src/window_creation_error.hh src/window_creation_error.cc
            src/window_fwd.hh src/window.hh src/window.cc)
add_executable(check_sdl_toolset test/main.cc
               test/height.cc
               test/logical_cleanup.cc
               test/logical_scope_guard.cc
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
set_target_properties(sdl_toolset_lib check_sdl_toolset PROPERTIES
                      CXX_STANDARD 14
                      CXX_STANDARD_REQUIRED true
                      CXX_EXTENSIONS false)
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -pedantic -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

include(FindPkgConfig)
pkg_search_module(SDL2 REQUIRED sdl2)
pkg_search_module(SDL2TTF REQUIRED SDL2_ttf>=2.0.12)
if(SDL2_FOUND)
  include_directories("${SDL2_INCLUDE_DIRS}" "${SDL2TTF_INCLUDE_DIRS}")
  target_link_libraries(check_sdl_toolset "${SDL3_LIBRARIES}" "${SDL2TTF_LIBRARIES}")
endif()

include_directories("${PROJECT_BINARY_DIR}")

target_link_libraries(check_sdl_toolset sdl_toolset_lib)

install(TARGETS sdl_toolset_lib DESTINATION lib)
