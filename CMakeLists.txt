cmake_minimum_required(VERSION 3.2.2)
project(sdl_toolset VERSION 0.0.0.1)

add_library(sdl_toolset_lib
            src/detail/sdl_system_fwd.hh src/detail/sdl_system.hh src/detail/sdl_system.cc
            src/height_fwd.hh src/height.hh src/height.cc
            src/logical_scope_guard_fwd.hh src/logical_scope_guard.hh src/logical_scope_guard.tcc src/logical_scope_guard.cc
            src/point_fwd.hh src/point.hh src/point.cc
            src/rectangle_fwd.hh src/rectangle.hh src/rectangle.cc
            src/renderer_creation_error.hh src/renderer_creation_error.cc
            src/sdl_audio_subsystem_fwd.hh src/sdl_audio_subsystem.hh src/sdl_audio_subsystem.cc
            src/sdl_events_subsystem_fwd.hh src/sdl_events_subsystem.hh src/sdl_events_subsystem.cc
            src/sdl_gamecontroller_subsystem_fwd.hh src/sdl_gamecontroller_subsystem.hh src/sdl_gamecontroller_subsystem.cc
            src/sdl_haptic_subsystem_fwd.hh src/sdl_haptic_subsystem.hh src/sdl_haptic_subsystem.cc
            src/sdl_joystick_subsystem_fwd.hh src/sdl_joystick_subsystem.hh src/sdl_joystick_subsystem.cc
            src/sdl_renderer_fwd.hh src/sdl_renderer.hh src/sdl_renderer.cc
            src/sdl_subsystem_init_error.hh src/sdl_subsystem_init_error.cc
            src/sdl_surface_fwd.hh src/sdl_surface.hh src/sdl_surface.cc
            src/sdl_system0_fwd.hh src/sdl_system0.hh src/sdl_system0.cc
            src/sdl_system_fwd.hh src/sdl_system.hh src/sdl_system.cc
            src/sdl_system_init_error.hh src/sdl_system_init_error.cc
            src/sdl_texture_creation_error.hh src/sdl_texture_creation_error.cc
            src/sdl_texture_fwd.hh src/sdl_texture.hh src/sdl_texture.cc
            src/sdl_timer_subsystem_fwd.hh src/sdl_timer_subsystem.hh src/sdl_timer_subsystem.cc
            src/sdl_ttf_font_fwd.hh src/sdl_ttf_font.hh src/sdl_ttf_font.cc
            src/sdl_ttf_font_open_error.hh src/sdl_ttf_font_open_error.cc
            src/sdl_ttf_system_fwd.hh src/sdl_ttf_system.hh src/sdl_ttf_system.cc
            src/sdl_ttf_system_init_error.hh src/sdl_ttf_system_init_error.cc
            src/sdl_video_subsystem_fwd.hh src/sdl_video_subsystem.hh src/sdl_video_subsystem.cc
            src/sdl_window_fwd.hh src/sdl_window.hh src/sdl_window.cc
            src/surface_creation_error_fwd.hh src/surface_creation_error.hh src/surface_creation_error.cc
            src/width_fwd.hh src/width.hh src/width.cc
            src/window_creation_error.hh src/window_creation_error.cc)
add_executable(check_sdl_toolset test/main.cc
               test/height.cc
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
