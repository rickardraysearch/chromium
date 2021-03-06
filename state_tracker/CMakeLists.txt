include_directories(.)
set(GENERATED
	state_get.c
	state_isenabled.c
	state.def
	../include/state/cr_statefuncs.h
	state_buffer_gen.c
	state_current_gen.c
	state_fog_gen.c
	state_hint_gen.c
	state_lighting_gen.c
	state_line_gen.c
	state_multisample_gen.c
	state_point_gen.c
	state_polygon_gen.c
	state_regcombiner_gen.c
	state_stencil_gen.c
	state_viewport_gen.c
)
# TODO: generate these files!


set(SOURCES
	state_attrib.c
	state_buffer.c
	state_bufferobject.c
	state_client.c
	state_current.c
	state_diff.c
	state_enable.c
	state_error.c
	state_evaluators.c
	state_feedback.c
	state_fence.c
	state_flush.c
	state_fog.c
	state_getstring.c
	state_hint.c
	state_init.c
	state_lighting.c
	state_limits.c
	state_line.c
	state_lists.c
	state_multisample.c
	state_occlude.c
	state_pixel.c
	state_point.c
	state_polygon.c
	state_program.c
	state_rasterpos.c
	state_regcombiner.c
	state_stencil.c
	state_texture.c
	state_teximage.c
	state_texdiff.c
	state_transform.c
	state_viewport.c
	${CMAKE_CURRENT_BINARY_DIR}/state_get.c
	${CMAKE_CURRENT_BINARY_DIR}/state_isenabled.c
	${CMAKE_CURRENT_BINARY_DIR}/state.def
	${PROJECT_BINARY_DIR}/include/state/cr_statefuncs.h
	${CMAKE_CURRENT_BINARY_DIR}/state_buffer_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_current_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_fog_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_hint_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_lighting_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_line_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_multisample_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_point_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_polygon_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_regcombiner_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_stencil_gen.c
	${CMAKE_CURRENT_BINARY_DIR}/state_viewport_gen.c
)

set(DIFF
	Buffer
	Client
	Fog
	Hint
	Lighting
	Line
	Multisample
	Point
	Polygon
	RegCombiner
	Stencil
	Viewport)
foreach(DIFFNAME ${DIFF})
	string(TOLOWER "${DIFFNAME}" DIFFNAME_LC)
	set(output state_${DIFFNAME_LC}_gen.c)
	add_custom_command(OUTPUT ${output}
		COMMAND
		${PYTHON_EXECUTABLE} gendiffcode.py ${DIFFNAME_LC} ${DIFFNAME} > ${CMAKE_CURRENT_BINARY_DIR}/${output}
		WORKING_DIRECTORY
		${CMAKE_CURRENT_SOURCE_DIR}
		DEPENDS
		${CMAKE_CURRENT_SOURCE_DIR}/gendiffcode.py
		${CMAKE_CURRENT_SOURCE_DIR}/state_${DIFFNAME_LC}.txt)
endforeach()

generate_with_python(state_get.py state_get.c state_get.txt state_extensions_get.txt ${APIFILES})
generate_with_python(state_isenabled.py state_isenabled.c state_isenabled.txt state_extensions_isenabled.txt ${APIFILES})
generate_with_python(state_current.py state_current_gen.c convert.py ${APIFILES})
generate_with_python(state_defs.py state.def state_special state_select_special state_feedback_special ${APIFILES})
generate_with_python(state_funcs.py ${PROJECT_BINARY_DIR}/include/state/cr_statefuncs.h state_special state_select_special state_feedback_special ${APIFILES})

add_library(crstate STATIC ${SOURCES})
target_link_libraries(crstate spuload crutil crmothership)
target_link_libraries(crstate ${EXTRA_LIBS})
install(TARGETS crstate
	LIBRARY DESTINATION lib COMPONENT runtime
	ARCHIVE DESTINATION lib COMPONENT dev
	RUNTIME DESTINATION bin COMPONENT runtime)

# header dependency
add_dependencies(crstate spuload)