cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

add_subdirectory(library ,library1)

add_executable(main main.c)

target_link_libraries(main PUBLIC library library1)

target_include_directories(main PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURSE_DIR}/library"
)


