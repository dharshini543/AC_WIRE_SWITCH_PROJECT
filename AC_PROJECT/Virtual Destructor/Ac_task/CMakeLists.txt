cmake_minimum_required(VERSION 3.16)

project(AC_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AC_task main.cpp
    Wire.h Wire.cpp
    Switch.h Switch.cpp
    AC.h AC.cpp
    Polycab_wire.h Polycab_wire.cpp
    Finolex_wire.h Finolex_wire.cpp
    Havels_wire.h Havels_wire.cpp)

include(GNUInstallDirs)
install(TARGETS AC_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
