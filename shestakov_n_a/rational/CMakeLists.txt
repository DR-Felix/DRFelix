project ("rational")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (rational "rational.cpp" "rational.h" )

add_library(rational "rational.cpp" "rational.h")

target_include_directories(rational PUBLIC ".")
