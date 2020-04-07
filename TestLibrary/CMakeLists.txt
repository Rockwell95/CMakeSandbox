add_library(TestLibrary SHARED "")

target_include_directories(TestLibrary PRIVATE ${PROJECT_BINARY_DIR})

set(HEADERS library.h exported.h)
set(SOURCES library.cpp main.cpp)

target_sources(TestLibrary PRIVATE ${HEADERS} ${SOURCES})

set_target_properties(TestLibrary
        PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION ${PROJECT_VERSION}
        )

# Let's set compiler-specific flags
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
    # G++
    target_compile_options(TestLibrary PRIVATE -Wall -Wextra)
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
    # MSVC
    target_compile_options(TestLibrary PRIVATE /EHsc /MTd /W2 /c)
    # Set the DLLEXPORT variable to export symbols
    target_compile_definitions(TestLibrary PRIVATE WIN_EXPORT)
endif ()

install(TARGETS TestLibrary DESTINATION lib)
install(FILES ${HEADERS} DESTINATION include)