cmake_minimum_required(VERSION 3.10.0)
project(WZRY VERSION 0.1.0 LANGUAGES C CXX)

# add_library()
# find all sorce file in directory and store in variable
aux_source_directory(cpp_lyx/src/base SRC_BASE)
aux_source_directory(cpp_lyx/src/HeroModels SRC_HERO)
aux_source_directory(cpp_lyx/src/EquipmentModels SRC_EQUIPMENT)

aux_source_directory(cpp_lyx/test SRC_TEST)

# add_library(WZRY WZRY.cpp)
# file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/cpp_lyx/*.cc")
# directories to include files(header files)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/cpp_lyx/include)
# use source file to generate exe file, (exename source)
# add_executable(WZRY  ${SOURCE_FILES})
add_executable(WZRY ${SRC_BASE} ${SRC_TEST} ${SRC_HERO} ${SRC_EQUIPMENT})

