include_directories(.)
set(SOURCES
	dlisttest.c
)
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${GLUT_INCLUDE_DIR})
add_executable(dlisttest  ${SOURCES})
target_link_libraries(dlisttest ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
target_link_libraries(dlisttest ${EXTRA_LIBS})
if(X11_PLATFORM)
	target_link_libraries(dlisttest ${X11_LIBRARIES})
endif()
install(TARGETS dlisttest
	LIBRARY DESTINATION lib COMPONENT runtime
	ARCHIVE DESTINATION lib COMPONENT dev
	RUNTIME DESTINATION bin COMPONENT runtime)
