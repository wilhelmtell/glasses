cmake_minimum_required(VERSION 3.6)
project(Glasses)

configure_file(
  "${PROJECT_SOURCE_DIR}/src/static_config.hh.in"
  "${PROJECT_BINARY_DIR}/static_config.hh"
  )

set(
  GLASSES_LIB_TUS
  src/audio_subsystem.cc
  src/clear_render.cc
  src/detail/system.cc
  src/event_dispatch.cc
  src/events_subsystem.cc
  src/gamecontroller_subsystem.cc
  src/haptic_subsystem.cc
  src/joystick_subsystem.cc
  src/logical_cleanup.cc
  src/logical_scope_guard.cc
  src/minimal_system.cc
  src/mix_audio.cc
  src/mix_chunk.cc
  src/mix_chunk_open_error.cc
  src/mix_open_audio_error.cc
  src/mix_system.cc
  src/mix_system_init_error.cc
  src/renderer.cc
  src/renderer_creation_error.cc
  src/sdl_point.cc
  src/sdl_rect.cc
  src/sdl_rect_point_common.cc
  src/sdl_texture.cc
  src/subsystem_init_error.cc
  src/surface.cc
  src/surface_creation_error.cc
  src/system.cc
  src/system_init_error.cc
  src/text.cc
  src/texture.cc
  src/texture_creation_error.cc
  src/timer_subsystem.cc
  src/title.cc
  src/ttf_font.cc
  src/ttf_font_open_error.cc
  src/ttf_system.cc
  src/ttf_system_init_error.cc
  src/video_subsystem.cc
  src/window.cc
  src/window_creation_error.cc
  )

add_library(glasses_lib ${GLASSES_LIB_TUS})

add_executable(
  check_glasses_bin
  test/check_glasses.cc
  test/logical_cleanup.cc
  test/logical_init.cc
  test/point.cc
  test/rectangle.cc
  test/rectangle_point_common.cc
  )

add_dependencies(check_glasses_bin glasses_lib)

set_target_properties(
  glasses_lib
  check_glasses_bin
  PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED true
  CXX_STANDARD_EXTENSIONS false
  )

set_target_properties(
  glasses_lib
  PROPERTIES
  OUTPUT_NAME glasses
  )

set_target_properties(
  check_glasses_bin
  PROPERTIES
  OUTPUT_NAME check_glasses
  )

find_package(Boost 1.60.0 REQUIRED)
include_directories("${Boost_INCLUDE_DIRS}")
target_link_libraries(check_glasses_bin "${Boost_LIBRARIES}")

include(FindPkgConfig)
pkg_check_modules(
  sdl2
  REQUIRED
  sdl2>=2.0.3
  SDL2_ttf>=2.0.12
  SDL2_image>=2.0.1
  SDL2_mixer>=2.0.1
  )
include_directories(
  "${sdl2_INCLUDE_DIRS}"
  )
target_link_libraries(check_glasses_bin "${sdl2_LIBRARIES}")

target_link_libraries(check_glasses_bin glasses_lib)

enable_testing()

add_test(check_glasses check_glasses --reporter=compact)
