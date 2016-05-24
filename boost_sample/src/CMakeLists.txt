add_library (mathops mathops.cpp header.h)
add_executable (demo main.cpp)
target_link_libraries (demo mathops)
