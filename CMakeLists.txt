cmake_minimum_required(VERSION 3.27)

project(Sequences LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

include_directories("SeqLib/")
add_subdirectory("SeqLib")

#add_library(SeqLib ${CMAKE_SOURCE_DIR}/SeqLib/sequence.cpp ${CMAKE_SOURCE_DIR}/SeqLib/sequence.h)
#link_libraries(${CMAKE_BINARY_DIR}/SeqLib)
#link_directories( ${CMAKE_BINARY_DIR}/SeqLib )

add_executable(Sequences
  main.cpp
)

# find_library("SeqLib/" SeqLib)


target_link_libraries(Sequences Qt${QT_VERSION_MAJOR}::Core SeqLib)



# set_target_properties(Sequences PROPERTIES INTERFACE_LINK_LIBRARIES_DIRECT SeqLib)


include(GNUInstallDirs)
install(TARGETS Sequences
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# install(FILES $<TARGET_RUNTIME_DLLS:SeqLib> TYPE BIN)


add_custom_command(TARGET Sequences POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:Sequences> $<TARGET_FILE_DIR:Sequences>
  COMMAND_EXPAND_LISTS
  )

# install(
#   DIRECTORY "${CMAKE_BINARY_DIR}/SeqLib}"
#   TYPE BIN
#   FILES_MATCHING REGEX "[^\\\\/.]\\.[dD][lL][lL]$"
# )
