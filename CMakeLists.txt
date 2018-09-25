cmake_minimum_required (VERSION 3.6)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_INIT} /std:c++latest /await /wd4201 /wd4512 /EHa /bigobj" CACHE STRING "" FORCE)
project (HELLO)

# Recurse into the "Hello" and "Demo" subdirectories. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.
add_subdirectory (Hello)
add_subdirectory (Demo)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT helloDemo)