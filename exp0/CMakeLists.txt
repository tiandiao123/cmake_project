cmake_minimum_required(VERSION 3.0)
project(eigen_samples)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

if(TARGET Eigen3::Eigen)
  message(STATUS "Eigen3 v${EIGEN3_VERSION_STRING} found in ${EIGEN3_INCLUDE_DIR}")
endif()



add_executable(linalg_eigen "linalg_eigen.cc")
add_executable(linreg_eigen "linreg_eigen.cc")


target_link_libraries(linalg_eigen
  PUBLIC
    Eigen3::Eigen
  )

target_link_libraries(linreg_eigen
  PUBLIC
    Eigen3::Eigen
  )


