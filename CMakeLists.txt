cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(test_project)

pico_sdk_init()

add_executable(ttbasic_pico
        ttbasic_pico.c basic_pico.c
        )

# Pull in our (to be renamed) simple get you started dependencies
target_link_libraries(ttbasic_pico pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(ttbasic_pico)

pico_enable_stdio_usb(ttbasic_pico 1)

#pico_enable_stdio_uart(ttbasic_pico 1)
