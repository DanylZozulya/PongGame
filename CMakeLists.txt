cmake_minimum_required(VERSION 3.17)
project(POng2)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH "$ENV{HOME}/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7717.62/bin/cmake/linux/share/cmake-3.17/Modules")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)


include_directories(${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR})

add_executable(POng2 main.cpp Game.h Game.cpp Paddle.h Paddle.cpp Entity.h Entity.cpp Ball.h
        Ball.cpp Board.h Board.cpp Score.h Score.cpp)

target_link_libraries(POng2 ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES})

install(TARGETS POng2 DESTINATION bin)
