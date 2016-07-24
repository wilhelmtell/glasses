cmake_minimum_required(VERSION 3.6)
project(Glasses)

exec_program(
  "tools/version.bash"
  ${PROJECT_SOURCE_DIR}
  OUTPUT_VARIABLE PROJECT_VERSION
  )

configure_file(
  "${PROJECT_SOURCE_DIR}/src/static_config.hh.in"
  "${PROJECT_BINARY_DIR}/static_config.hh"
  )

set(
  GLASSES_LIB_HHS
  src/audio_subsystem.hh
  src/audio_subsystem_fwd.hh
  src/bmp_filename.hh
  src/bmp_filename_fwd.hh
  src/clear_render.hh
  src/clear_render_fwd.hh
  src/event_dispatch.hh
  src/event_dispatch_fwd.hh
  src/event_loop.hh
  src/events_subsystem.hh
  src/events_subsystem_fwd.hh
  src/filename.hh
  src/filename_fwd.hh
  src/flac_filename.hh
  src/flac_filename_fwd.hh
  src/gamecontroller_subsystem.hh
  src/gamecontroller_subsystem_fwd.hh
  src/haptic_subsystem.hh
  src/haptic_subsystem_fwd.hh
  src/joystick_subsystem.hh
  src/joystick_subsystem_fwd.hh
  src/logical_cleanup.hh
  src/logical_cleanup_fwd.hh
  src/logical_init.hh
  src/logical_init_fwd.hh
  src/logical_scope_guard.hh
  src/logical_scope_guard_fwd.hh
  src/minimal_system.hh
  src/minimal_system_fwd.hh
  src/mix_audio.hh
  src/mix_audio_fwd.hh
  src/mix_chunk.hh
  src/mix_chunk_fwd.hh
  src/mix_chunk_open_error.hh
  src/mix_chunk_open_error_fwd.hh
  src/mix_open_audio_error.hh
  src/mix_open_audio_error_fwd.hh
  src/mix_system.hh
  src/mix_system_fwd.hh
  src/mix_system_init_error.hh
  src/mix_system_init_error_fwd.hh
  src/otf_filename.hh
  src/otf_filename_fwd.hh
  src/png_filename.hh
  src/png_filename_fwd.hh
  src/point.hh
  src/point_fwd.hh
  src/rectangle.hh
  src/rectangle_fwd.hh
  src/rectangle_point_common.hh
  src/renderer.hh
  src/renderer_creation_error.hh
  src/renderer_creation_error_fwd.hh
  src/renderer_fwd.hh
  src/sdl_point.hh
  src/sdl_rect.hh
  src/sdl_rect_point_common.hh
  src/sdl_texture.hh
  src/sdl_texture_fwd.hh
  src/subsystem_init_error.hh
  src/subsystem_init_error_fwd.hh
  src/surface.hh
  src/surface_creation_error.hh
  src/surface_creation_error_fwd.hh
  src/surface_fwd.hh
  src/system.hh
  src/system_fwd.hh
  src/system_init_error.hh
  src/system_init_error_fwd.hh
  src/text.hh
  src/text_fwd.hh
  src/texture.hh
  src/texture_creation_error.hh
  src/texture_creation_error_fwd.hh
  src/texture_fwd.hh
  src/timer_subsystem.hh
  src/timer_subsystem_fwd.hh
  src/title.hh
  src/title_fwd.hh
  src/ttf_filename.hh
  src/ttf_filename_fwd.hh
  src/ttf_font.hh
  src/ttf_font_fwd.hh
  src/ttf_font_open_error.hh
  src/ttf_font_open_error_fwd.hh
  src/ttf_system.hh
  src/ttf_system_fwd.hh
  src/ttf_system_init_error.hh
  src/ttf_system_init_error_fwd.hh
  src/video_subsystem.hh
  src/video_subsystem_fwd.hh
  src/wav_filename.hh
  src/wav_filename_fwd.hh
  src/window.hh
  src/window_creation_error.hh
  src/window_creation_error_fwd.hh
  src/window_fwd.hh
  )

set(
  GLASSES_LIB_TCCS
  src/detail/basic_filename.tcc
  src/detail/translate_event.tcc
  src/event_loop.tcc
  src/logical_init.tcc
  src/point.tcc
  src/rectangle.tcc
  src/rectangle_point_common.tcc
  )

set(
  GLASSES_LIB_DETAIL_HHS
  src/detail/basic_filename.hh
  src/detail/basic_filename_fwd.hh
  src/detail/system.hh
  src/detail/system_fwd.hh
  src/detail/translate_event.hh
  )

set(
  GLASSES_LIB_DETAIL_TCCS
  src/detail/basic_filename.tcc
  src/detail/translate_event.tcc
  )

set(
  GLASSES_LIB_CCS
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

set(
  CHECK_GLASSES_CCS
  test/glasses.cc
  test/logical_cleanup.cc
  test/logical_init.cc
  test/point.cc
  test/rectangle.cc
  test/rectangle_point_common.cc
  )

add_library(glasses_lib ${GLASSES_LIB_CCS})

add_executable(check_glasses_bin ${CHECK_GLASSES_CCS})

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

find_package(Boost 1.60.0 REQUIRED)
include_directories("${Boost_INCLUDE_DIRS}")

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

install(
  TARGETS
  glasses_lib
  ARCHIVE
  DESTINATION lib
  )

install(
  FILES
  ${GLASSES_LIB_DETAIL_HHS}
  ${GLASSES_LIB_DETAIL_TCCS}
  DESTINATION include/glasses/detail
  )

install(
  FILES
  ${GLASSES_LIB_HHS}
  ${GLASSES_LIB_TCCS}
  DESTINATION include/glasses
  )

if(PKG_CONFIG_FOUND)
  configure_file("glasses.pc.in" "glasses.pc" @ONLY)
  install(FILES "${PROJECT_BINARY_DIR}/glasses.pc" DESTINATION lib/pkgconfig)
endif()

add_dependencies(check_glasses_bin glasses_lib)
target_link_libraries(
  check_glasses_bin
  "${Boost_LIBRARIES}"
  "${sdl2_LIBRARIES}"
  glasses_lib
  )

enable_testing()
add_test(cpp_glasses_tests check_glasses_bin --reporter=compact)
