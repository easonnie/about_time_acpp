cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#message(${Boost_LIBRARIES})
#message(${Boost_INCLUDE_DIR})

#find_package(Boost 1.68.0 COMPONENTS program_options REQUIRED)
find_package(Boost 1.68.0 COMPONENTS program_options REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

#message(${Boost_LIBRARIES})
#message(${Boost_INCLUDE_DIR})
#message(${Boost_LIBRARIES})

add_executable(cal_grade_s3_v1 sec3/v1/cal_grade.cpp)
add_executable(cal_grade_s4_v1 sec4/v1/cal_grade.cpp)

add_executable(ref_v1 side_study/ref_v1.cpp)
add_executable(try_boost_v2 side_study/try_boost_v2.cpp)

add_executable(report_grade sec4/v2/report_grades.cpp)

target_link_libraries(try_boost_v2 ${Boost_LIBRARIES})
target_link_libraries(report_grade ${Boost_LIBRARIES})

add_executable(c11_init_std side_study/c11_init_std.cpp)

#message(${Boost_LIBRARIES})
#message(${Boost_INCLUDE_DIR})