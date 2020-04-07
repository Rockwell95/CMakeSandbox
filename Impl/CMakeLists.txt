set(SOURCES main.cpp)

add_executable(Impl ${SOURCES})

target_include_directories(Impl PRIVATE ${PROJECT_SOURCE_DIR}/TestLibrary ${PROJECT_BINARY_DIR})

target_link_libraries(Impl PRIVATE TestLibrary)

# Let's set compiler-specific flags
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
    # G++
    target_compile_options(Impl PRIVATE -Wall -Wextra)
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
    # MSVC
    target_compile_options(Impl PRIVATE /EHsc /MTd /W2 /c)
    # Set the DLLEXPORT variable to export symbols
    target_compile_definitions(Impl PRIVATE WIN_EXPORT)
endif ()

install(TARGETS Impl DESTINATION lib)