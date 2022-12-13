cmake_minimum_required (VERSION 3.8)

project ("SVO_2")

add_library (Lib2 STATIC "Lib2.hpp" "Lib2.cpp")
add_executable (SVO_2 "SVO_2_main.cpp")
target_link_libraries(SVO_2 PUBLIC Lib2)

target_compile_features(SVO_2 PUBLIC cxx_std_20)
