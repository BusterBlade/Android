# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

set(sourceDir ${CMAKE_SOURCE_DIR}/src/main/cpp)
include_directories(${sourceDir}/header)

AUX_SOURCE_DIRECTORY(${sourceDir}  SRC_LIST)

add_library( # Sets the name of the library.
             ncamera
             SHARED
             ${SRC_LIST} )



target_link_libraries( # Specifies the target library.
                       ncamera
                       android
                       log
                       )