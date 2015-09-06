cmake_minimum_required(VERSION 3.2.2)
project(glasses VERSION 0.0.0.1)
set(ARCHIVE_NAME "${CMAKE_PROJECT_NAME}-${PROJECT_VERSION}")

set(glasses_lib_PRIVATE_GLS_DIM_FORWARD_DECLARATION_FILES
  "")

set(glasses_lib_PRIVATE_GLS_DIM_CLASS_DEFINITION_FILES
  "")

set(glasses_lib_PRIVATE_GLS_DIM_TEMPLATE_FUNCTION_DEFINITION_FILES
  "")

set(glasses_lib_PRIVATE_GLS_DIM_TRANSLATION_UNITS
  "")

set(glasses_lib_PUBLIC_GLS_DIM_FORWARD_DECLARATION_FILES
  src/dim/height_fwd.hh
  src/dim/width_fwd.hh)

set(glasses_lib_PUBLIC_GLS_DIM_CLASS_DEFINITION_FILES
  src/dim/height.hh
  src/dim/width.hh)

set(glasses_lib_PUBLIC_GLS_DIM_TEMPLATE_FUNCTION_DEFINITION_FILES
  "")

set(glasses_lib_PUBLIC_GLS_DIM_TRANSLATION_UNITS
  src/dim/height.cc
  src/dim/width.cc)

set(glasses_lib_PRIVATE_GLS_FORWARD_DECLARATION_FILES
  src/detail/system_fwd.hh
  src/detail/window_fwd.hh)

set(glasses_lib_PRIVATE_GLS_CLASS_DEFINITION_FILES
  src/detail/system.hh
  src/detail/translate_keydown_event.hh
  src/detail/window.hh)

set(glasses_lib_PRIVATE_GLS_TEMPLATE_FUNCTION_DEFINITION_FILES
  src/detail/translate_keydown_event.tcc)

set(glasses_lib_PRIVATE_GLS_TRANSLATION_UNITS
  src/detail/system.cc
  src/detail/window.cc)

set(glasses_lib_PUBLIC_GLS_FORWARD_DECLARATION_FILES
  src/audio_subsystem_fwd.hh
  src/centered_window_fwd.hh
  src/event_dispatch_fwd.hh
  src/event_loop_fwd.hh
  src/events_subsystem_fwd.hh
  src/fullscreen_desktop_window_fwd.hh
  src/fullscreen_window_fwd.hh
  src/gamecontroller_subsystem_fwd.hh
  src/haptic_subsystem_fwd.hh
  src/joystick_subsystem_fwd.hh
  src/logical_cleanup_fwd.hh
  src/logical_init_fwd.hh
  src/logical_scope_guard_fwd.hh
  src/minimal_system_fwd.hh
  src/point_fwd.hh
  src/positioned_rectangle_fwd.hh
  src/positioned_window_fwd.hh
  src/rectangle_fwd.hh
  src/renderer_creation_error_fwd.hh
  src/renderer_fwd.hh
  src/subsystem_init_error_fwd.hh
  src/surface_creation_error_fwd.hh
  src/surface_fwd.hh
  src/system_fwd.hh
  src/system_init_error_fwd.hh
  src/texture_creation_error_fwd.hh
  src/texture_fwd.hh
  src/timer_subsystem_fwd.hh
  src/title_fwd.hh
  src/ttf_font_fwd.hh
  src/ttf_font_open_error_fwd.hh
  src/ttf_system_fwd.hh
  src/ttf_system_init_error_fwd.hh
  src/video_subsystem_fwd.hh
  src/window_creation_error_fwd.hh
  src/window_fwd.hh)

set(glasses_lib_PUBLIC_GLS_CLASS_DEFINITION_FILES
  src/audio_subsystem.hh
  src/centered_window.hh
  src/event_dispatch.hh
  src/event_loop.hh
  src/events_subsystem.hh
  src/fullscreen_desktop_window.hh
  src/fullscreen_window.hh
  src/gamecontroller_subsystem.hh
  src/haptic_subsystem.hh
  src/joystick_subsystem.hh
  src/logical_cleanup.hh
  src/logical_init.hh
  src/logical_scope_guard.hh
  src/minimal_system.hh
  src/point.hh
  src/positioned_rectangle.hh
  src/positioned_window.hh
  src/rectangle.hh
  src/renderer.hh
  src/renderer_creation_error.hh
  src/subsystem_init_error.hh
  src/surface.hh
  src/surface_creation_error.hh
  src/system.hh
  src/system_init_error.hh
  src/texture.hh
  src/texture_creation_error.hh
  src/timer_subsystem.hh
  src/title.hh
  src/ttf_font.hh
  src/ttf_font_open_error.hh
  src/ttf_system.hh
  src/ttf_system_init_error.hh
  src/video_subsystem.hh
  src/window.hh
  src/window_creation_error.hh)

set(glasses_lib_PUBLIC_GLS_TEMPLATE_FUNCTION_DEFINITION_FILES
  src/event_loop.tcc)

set(glasses_lib_PUBLIC_GLS_TRANSLATION_UNITS
  src/audio_subsystem.cc
  src/centered_window.cc
  src/event_dispatch.cc
  src/events_subsystem.cc
  src/fullscreen_desktop_window.cc
  src/fullscreen_window.cc
  src/gamecontroller_subsystem.cc
  src/haptic_subsystem.cc
  src/joystick_subsystem.cc
  src/logical_cleanup.cc
  src/logical_init.cc
  src/logical_scope_guard.cc
  src/minimal_system.cc
  src/point.cc
  src/positioned_rectangle.cc
  src/positioned_window.cc
  src/rectangle.cc
  src/renderer.cc
  src/renderer_creation_error.cc
  src/subsystem_init_error.cc
  src/surface.cc
  src/surface_creation_error.cc
  src/system.cc
  src/system_init_error.cc
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
  src/window_creation_error.cc)

set(glasses_lib_PRIVATE_GLS_DIM_HEADER_FILES
  ${glasses_lib_PRIVATE_GLS_DIM_FORWARD_DECLARATION_FILES}
  ${glasses_lib_PRIVATE_GLS_DIM_CLASS_DEFINITION_FILES}
  ${glasses_lib_PRIVATE_GLS_DIM_TEMPLATE_FUNCTION_DEFINITION_FILES})

set(glasses_lib_PUBLIC_GLS_DIM_HEADER_FILES
  ${glasses_lib_PUBLIC_GLS_DIM_FORWARD_DECLARATION_FILES}
  ${glasses_lib_PUBLIC_GLS_DIM_CLASS_DEFINITION_FILES}
  ${glasses_lib_PUBLIC_GLS_DIM_TEMPLATE_FUNCTION_DEFINITION_FILES})

set(glasses_lib_GLS_DIM_HEADER_FILES
  ${glasses_lib_PRIVATE_GLS_DIM_HEADER_FILES}
  ${glasses_lib_PUBLIC_GLS_DIM_HEADER_FILES})

set(glasses_lib_GLS_DIM_TRANSLATION_UNITS
  ${glasses_lib_PRIVATE_GLS_DIM_TRANSLATION_UNITS}
  ${glasses_lib_PUBLIC_GLS_DIM_TRANSLATION_UNITS})

set(glasses_lib_PRIVATE_GLS_HEADER_FILES
  ${glasses_lib_PRIVATE_GLS_FORWARD_DECLARATION_FILES}
  ${glasses_lib_PRIVATE_GLS_CLASS_DEFINITION_FILES}
  ${glasses_lib_PRIVATE_GLS_TEMPLATE_FUNCTION_DEFINITION_FILES})

set(glasses_lib_PUBLIC_GLS_HEADER_FILES
  ${glasses_lib_PUBLIC_GLS_FORWARD_DECLARATION_FILES}
  ${glasses_lib_PUBLIC_GLS_CLASS_DEFINITION_FILES}
  ${glasses_lib_PUBLIC_GLS_TEMPLATE_FUNCTION_DEFINITION_FILES})

set(glasses_lib_GLS_HEADER_FILES
  ${glasses_lib_PRIVATE_GLS_HEADER_FILES}
  ${glasses_lib_PUBLIC_GLS_HEADER_FILES})

set(glasses_lib_GLS_TRANSLATION_UNITS
  ${glasses_lib_PRIVATE_GLS_TRANSLATION_UNITS}
  ${glasses_lib_PUBLIC_GLS_TRANSLATION_UNITS})

add_library(glasses_lib
  ${glasses_lib_GLS_DIM_HEADER_FILES}
  ${glasses_lib_GLS_DIM_TRANSLATION_UNITS}
  ${glasses_lib_GLS_HEADER_FILES}
  ${glasses_lib_GLS_TRANSLATION_UNITS})

add_executable(check_glasses EXCLUDE_FROM_ALL test/main.cc
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
  test/positioned_rectangle_outside.cc)

add_dependencies(check_glasses glasses_lib)

add_custom_command(OUTPUT tests_passed
  COMMAND check_glasses --reporter compact && touch tests_passed
  DEPENDS check_glasses
  COMMENT Testing)
add_custom_target(check DEPENDS tests_passed)

add_custom_command(OUTPUT "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.zip"
  COMMAND git archive --format=zip --prefix="${ARCHIVE_NAME}"/ HEAD >"${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.zip" || rm "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.zip"
  DEPENDS check_glasses check
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
add_custom_command(OUTPUT "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.gz"
  COMMAND git archive --format=tar --prefix="${ARCHIVE_NAME}"/ HEAD |gzip -9 >"${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.gz" || rm "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.gz"
  DEPENDS check_glasses check
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
add_custom_command(OUTPUT "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz"
  COMMAND git archive --format=tar --prefix="${ARCHIVE_NAME}"/ HEAD |xz -9 >"${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz" || rm "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz"
  DEPENDS check_glasses check
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
add_custom_target(dist_zip
  DEPENDS "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.zip")
add_custom_target(dist_gz
  DEPENDS "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.gz")
add_custom_target(dist_xz
  DEPENDS "${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.xz")
add_custom_target(dist DEPENDS dist_zip dist_gz dist_xz
  COMMENT Archiving)

configure_file("${PROJECT_SOURCE_DIR}/config.h.in" "${PROJECT_BINARY_DIR}/config.h")

set_target_properties(glasses_lib PROPERTIES OUTPUT_NAME glasses)
set_target_properties(glasses_lib check_glasses PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED true
  CXX_EXTENSIONS false)
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -pedantic -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

find_package(Boost 1.58.0 REQUIRED COMPONENTS signals)
include_directories("${Boost_INCLUDE_DIRS}")
link_directories("${Boost_LIBRARY_DIRS}")
target_link_libraries(check_glasses "${Boost_LIBRARIES}")

include(FindPkgConfig)
pkg_check_modules(SDL REQUIRED
  sdl2>=2.0.3
  SDL2_ttf>=2.0.12)
include_directories("${SDL_INCLUDE_DIRS}")
link_directories("${SDL_LIBRARY_DIRS}")
target_link_libraries(check_glasses "${SDL_LIBRARIES}")

include_directories("${PROJECT_BINARY_DIR}")

target_link_libraries(check_glasses glasses_lib)

install(TARGETS glasses_lib
  DESTINATION lib)
install(FILES ${glasses_lib_PRIVATE_GLS_DIM_HEADER_FILES}
  DESTINATION include/glasses/detail/dim)
install(FILES ${glasses_lib_PRIVATE_GLS_HEADER_FILES}
  DESTINATION include/glasses/detail)
install(FILES ${glasses_lib_PUBLIC_GLS_DIM_HEADER_FILES}
  DESTINATION include/glasses/dim)
install(FILES ${glasses_lib_PUBLIC_GLS_HEADER_FILES}
  DESTINATION include/glasses)
