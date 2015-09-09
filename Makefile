prefix ?= ${HOME}/usr/local/stow/$(notdir ${CURDIR})

.PHONY: all check clean distclean

VERSION := $(shell bash tools/version.bash)
CONFIG_H_IN := config.h.in
ALL_SOURCE_FILES := src/audio_subsystem.cc \
                    src/audio_subsystem.hh \
                    src/audio_subsystem_fwd.hh \
                    src/centered_window.cc \
                    src/centered_window.hh \
                    src/centered_window_fwd.hh \
                    src/detail/system.cc \
                    src/detail/system.hh \
                    src/detail/system_fwd.hh \
                    src/detail/translate_event.hh \
                    src/detail/translate_event.tcc \
                    src/detail/translate_keydown_event.hh \
                    src/detail/translate_keydown_event.tcc \
                    src/detail/window.cc \
                    src/detail/window.hh \
                    src/detail/window_fwd.hh \
                    src/dim/height.cc \
                    src/dim/height.hh \
                    src/dim/height_fwd.hh \
                    src/dim/width.cc \
                    src/dim/width.hh \
                    src/dim/width_fwd.hh \
                    src/event_dispatch.cc \
                    src/event_dispatch.hh \
                    src/event_dispatch_fwd.hh \
                    src/event_loop.hh \
                    src/event_loop.tcc \
                    src/event_loop_fwd.hh \
                    src/events_subsystem.cc \
                    src/events_subsystem.hh \
                    src/events_subsystem_fwd.hh \
                    src/fullscreen_desktop_window.cc \
                    src/fullscreen_desktop_window.hh \
                    src/fullscreen_desktop_window_fwd.hh \
                    src/fullscreen_window.cc \
                    src/fullscreen_window.hh \
                    src/fullscreen_window_fwd.hh \
                    src/gamecontroller_subsystem.cc \
                    src/gamecontroller_subsystem.hh \
                    src/gamecontroller_subsystem_fwd.hh \
                    src/haptic_subsystem.cc \
                    src/haptic_subsystem.hh \
                    src/haptic_subsystem_fwd.hh \
                    src/joystick_subsystem.cc \
                    src/joystick_subsystem.hh \
                    src/joystick_subsystem_fwd.hh \
                    src/logical_cleanup.cc \
                    src/logical_cleanup.hh \
                    src/logical_cleanup_fwd.hh \
                    src/logical_init.cc \
                    src/logical_init.hh \
                    src/logical_init_fwd.hh \
                    src/logical_scope_guard.cc \
                    src/logical_scope_guard.hh \
                    src/logical_scope_guard_fwd.hh \
                    src/minimal_system.cc \
                    src/minimal_system.hh \
                    src/minimal_system_fwd.hh \
                    src/point.cc \
                    src/point.hh \
                    src/point_fwd.hh \
                    src/positioned_rectangle.cc \
                    src/positioned_rectangle.hh \
                    src/positioned_rectangle_fwd.hh \
                    src/positioned_window.cc \
                    src/positioned_window.hh \
                    src/positioned_window_fwd.hh \
                    src/rectangle.cc \
                    src/rectangle.hh \
                    src/rectangle_fwd.hh \
                    src/renderer.cc \
                    src/renderer.hh \
                    src/renderer_creation_error.cc \
                    src/renderer_creation_error.hh \
                    src/renderer_creation_error_fwd.hh \
                    src/renderer_fwd.hh \
                    src/subsystem_init_error.cc \
                    src/subsystem_init_error.hh \
                    src/subsystem_init_error_fwd.hh \
                    src/surface.cc \
                    src/surface.hh \
                    src/surface_creation_error.cc \
                    src/surface_creation_error.hh \
                    src/surface_creation_error_fwd.hh \
                    src/surface_fwd.hh \
                    src/system.cc \
                    src/system.hh \
                    src/system_fwd.hh \
                    src/system_init_error.cc \
                    src/system_init_error.hh \
                    src/system_init_error_fwd.hh \
                    src/texture.cc \
                    src/texture.hh \
                    src/texture_creation_error.cc \
                    src/texture_creation_error.hh \
                    src/texture_creation_error_fwd.hh \
                    src/texture_fwd.hh \
                    src/timer_subsystem.cc \
                    src/timer_subsystem.hh \
                    src/timer_subsystem_fwd.hh \
                    src/title.cc \
                    src/title.hh \
                    src/title_fwd.hh \
                    src/ttf_font.cc \
                    src/ttf_font.hh \
                    src/ttf_font_fwd.hh \
                    src/ttf_font_open_error.cc \
                    src/ttf_font_open_error.hh \
                    src/ttf_font_open_error_fwd.hh \
                    src/ttf_system.cc \
                    src/ttf_system.hh \
                    src/ttf_system_fwd.hh \
                    src/ttf_system_init_error.cc \
                    src/ttf_system_init_error.hh \
                    src/ttf_system_init_error_fwd.hh \
                    src/video_subsystem.cc \
                    src/video_subsystem.hh \
                    src/video_subsystem_fwd.hh \
                    src/window.cc \
                    src/window.hh \
                    src/window_creation_error.cc \
                    src/window_creation_error.hh \
                    src/window_creation_error_fwd.hh \
                    src/window_fwd.hh \
                    test/dim/height.cc \
                    test/dim/width.cc \
                    test/logical_cleanup.cc \
                    test/logical_init.cc \
                    test/main.cc \
                    test/point.cc \
                    test/point_bounding.cc \
                    test/point_inside.cc \
                    test/point_io.hh \
                    test/point_io.tcc \
                    test/point_outside.cc \
                    test/positioned_rectangle.cc \
                    test/positioned_rectangle_bottom_right.cc \
                    test/positioned_rectangle_intersect.cc \
                    test/positioned_rectangle_outside.cc
LIBRARY_DIRECTORIES :=
LIBRARIES :=
CXXFLAGS := ${CXXFLAGS} -std=c++14

LIBGLASSES_SOURCE_FILES := $(filter src/%,${ALL_SOURCE_FILES})
LIBGLASSES_TRANSLATION_UNITS := $(filter %.cc,${LIBGLASSES_SOURCE_FILES})
LIBGLASSES_OBJECT_FILES := ${LIBGLASSES_TRANSLATION_UNITS:.cc=.o}
LIBGLASSES_DEPENDENCY_FILES := ${LIBGLASSES_TRANSLATION_UNITS:.cc=.dep}
CHECK_GLASSES_SOURCE_FILES := $(filter test/%,${ALL_SOURCE_FILES})
CHECK_GLASSES_TRANSLATION_UNITS := $(filter %.cc,${CHECK_GLASSES_SOURCE_FILES})
CHECK_GLASSES_OBJECT_FILES := ${CHECK_GLASSES_TRANSLATION_UNITS:.cc=.o}
CHECK_GLASSES_DEPENDENCY_FILES := ${CHECK_GLASSES_TRANSLATION_UNITS:.cc=.dep}
CHECK_GLASSES_MAIN_SOURCE_FILE := $(filter test/main.cc,${CHECK_GLASSES_TRANSLATION_UNITS})
CHECK_GLASSES_MAIN_OBJECT_FILE := ${CHECK_GLASSES_MAIN_SOURCE_FILE:.cc=.o}
CPPFLAGS := ${CPPFLAGS}
LDFLAGS := ${LDFLAGS} $(foreach D,${LIBRARY_DIRECTORIES},-L$D) $(foreach L,${LIBRARIES},-l$L)

all: configure.cache libglasses.a

configure.cache: configure
	./configure

libglasses.a: ${LIBGLASSES_OBJECT_FILES}
	ar rcs $@ $^

check: check_glasses
	./check_glasses

tests_passed: check_glasses
	./check_glasses && touch tests_passed

check_glasses: ${CHECK_GLASSES_OBJECT_FILES} libglasses.a
	${LINK.cc} libglasses.a ${CHECK_GLASSES_OBJECT_FILES} ${OUTPUT_OPTION}

clean:
	rm -f config.hh ${LIBGLASSES_OBJECT_FILES} ${LIBGLASSES_DEPENDENCY_FILES} ${CHECK_GLASSES_OBJECT_FILES} ${CHECK_GLASSES_DEPENDENCY_FILES}

distclean: clean
	rm -f libglasses.a check_glasses configure.cache

%.dep: %.cc
	${CXX} ${CPPFLAGS} ${CXXFLAGS} -MG -MM -MP -MT$@ -MT${<:.cc=.o} $< >$@

ifneq "${MAKECMDGOALS}" "clean"
  ifneq "${MAKECMDGOALS}" "distclean"
    ifneq "${MAKECMDGOALS}" "uninstall"
      -include ${LIBGLASSES_DEPENDENCY_FILES} ${CHECK_GLASSES_DEPENDENCY_FILES}
    endif
  endif
endif

dist: glasses-${VERSION}.tar.gz glasses-${VERSION}.tar.xz glasses-${VERSION}.zip

glasses-${VERSION}.tar.gz:
	git archive --format=tar --prefix=glasses/ HEAD |gzip -9 >glasses-${VERSION}.tar.gz

glasses-${VERSION}.tar.xz:
	git archive --format=tar --prefix=glasses/ HEAD |xz -9 >glasses-${VERSION}.tar.xz

glasses-${VERSION}.zip:
	git archive --format=zip --prefix=glasses-${VERSION}/ HEAD >glasses-${VERSION}.zip
