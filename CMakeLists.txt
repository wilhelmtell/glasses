cmake_minimum_required(VERSION 3.2.2)
project(sdl_toolset VERSION 0.0.0.1)
set(ARCHIVE_NAME "${CMAKE_PROJECT_NAME}-${PROJECT_VERSION}")

set(sdl_toolset_lib_PRIVATE_HEADERS
  src/detail/system_fwd.hh src/detail/system.hh)
set(sdl_toolset_lib_PUBLIC_HEADERS
  src/audio_subsystem_fwd.hh src/audio_subsystem.hh
  src/detail/system_fwd.hh src/detail/system.hh
  src/dim/height_fwd.hh src/dim/height.hh
  src/dim/width_fwd.hh src/dim/width.hh
  src/events_subsystem_fwd.hh src/events_subsystem.hh
  src/gamecontroller_subsystem_fwd.hh src/gamecontroller_subsystem.hh
  src/haptic_subsystem_fwd.hh src/haptic_subsystem.hh
  src/joystick_subsystem_fwd.hh src/joystick_subsystem.hh
  src/logical_cleanup_fwd.hh src/logical_cleanup.hh
  src/logical_init_fwd.hh src/logical_init.hh
  src/logical_scope_guard_fwd.hh src/logical_scope_guard.hh src/logical_scope_guard.tcc
  src/minimal_system_fwd.hh src/minimal_system.hh
  src/point_fwd.hh src/point.hh
  src/positioned_rectangle_fwd.hh src/positioned_rectangle.hh
  src/rectangle_fwd.hh src/rectangle.hh
  src/renderer_creation_error.hh
  src/renderer_fwd.hh src/renderer.hh
  src/subsystem_init_error.hh
  src/surface_creation_error_fwd.hh src/surface_creation_error.hh
  src/surface_fwd.hh src/surface.hh
  src/system_fwd.hh src/system.hh
  src/system_init_error.hh
  src/texture_creation_error_fwd.hh src/texture_creation_error.hh
  src/texture_fwd.hh src/texture.hh
  src/timer_subsystem_fwd.hh src/timer_subsystem.hh
  src/ttf_font_fwd.hh src/ttf_font.hh
  src/ttf_font_open_error.hh
  src/ttf_system_fwd.hh src/ttf_system.hh
  src/ttf_system_init_error.hh
  src/video_subsystem_fwd.hh src/video_subsystem.hh
  src/window_creation_error.hh
  src/window_fwd.hh src/window.hh)
set(sdl_toolset_lib_TRANSLATION_UNITS
  src/audio_subsystem.cc
  src/detail/system.cc
  src/dim/height.cc
  src/dim/width.cc
  src/events_subsystem.cc
  src/gamecontroller_subsystem.cc
  src/haptic_subsystem.cc
  src/joystick_subsystem.cc
  src/logical_cleanup.cc
  src/logical_init.cc
  src/logical_scope_guard.cc
  src/minimal_system.cc
  src/point.cc
  src/positioned_rectangle.cc
  src/rectangle.cc
  src/renderer_creation_error.cc
  src/renderer.cc
  src/subsystem_init_error.cc
  src/surface_creation_error.cc
  src/surface.cc
  src/system.cc
  src/system_init_error.cc
  src/texture_creation_error.cc
  src/texture.cc
  src/timer_subsystem.cc
  src/ttf_font.cc
  src/ttf_font_open_error.cc
  src/ttf_system.cc
  src/ttf_system_init_error.cc
  src/video_subsystem.cc
  src/window_creation_error.cc
  src/window.cc)
add_library(sdl_toolset_lib
  ${sdl_toolset_lib_PRIVATE_HEADERS}
  ${sdl_toolset_lib_PUBLIC_HEADERS}
  ${sdl_toolset_lib_TRANSLATION_UNITS})

add_executable(check_sdl_toolset EXCLUDE_FROM_ALL test/main.cc
  test/dim/height.cc
  test/dim/width.cc
  test/logical_cleanup.cc
  test/logical_init.cc
  test/point.cc
  test/point_bounding.cc
  test/point_inside.cc
  test/point_io.hh test/point_io.tcc
  test/point_outside.cc
  test/positioned_rectangle.cc
  test/positioned_rectangle_bottom_right.cc
  test/positioned_rectangle_intersect.cc
  test/positioned_rectangle_outside.cc
  test/rectangle.cc)

add_dependencies(check_sdl_toolset sdl_toolset_lib)

# nothing produces a file named enough_testing, so tests always run.
add_custom_command(OUTPUT enough_testing
  COMMAND check_sdl_toolset --reporter compact
  COMMENT Testing)
add_custom_target(check DEPENDS enough_testing)

add_custom_command(OUTPUT "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz"
  COMMAND git archive --format=tar --prefix="${ARCHIVE_NAME}"/ HEAD |xz -9 >"${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz" || rm "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz"
  DEPENDS check
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
  COMMENT Archiving)
add_custom_target(dist DEPENDS "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz")

configure_file("${PROJECT_SOURCE_DIR}/config.h.in" "${PROJECT_BINARY_DIR}/config.h")

set_target_properties(sdl_toolset_lib PROPERTIES OUTPUT_NAME sdl_toolset)
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

install(TARGETS sdl_toolset_lib
  DESTINATION lib)
install(FILES ${sdl_toolset_lib_PRIVATE_HEADERS}
  DESTINATION include/sdl_toolset/detail)
install(FILES ${sdl_toolset_lib_PUBLIC_HEADERS}
  DESTINATION include/sdl_toolset)
