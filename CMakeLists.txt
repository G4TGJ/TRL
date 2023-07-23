add_library(TRL INTERFACE)

target_sources(TRL INTERFACE
    cat.c
    cat.h
    display.c
    display.h
    eeprom.h
    i2c.h
    lcd.c
    lcd.h
    morse.c
    morse.h
    nvram.c
    nvram.h
    osc.h
    pushbutton.c
    pushbutton.h
    rotary.c
    rotary.h
    serial.h
    si5351a.c
)
target_include_directories(TRL INTERFACE . ${CMAKE_SOURCE_DIR})

add_library(TRL_lcd_i2c INTERFACE)
target_sources(TRL_lcd_i2c INTERFACE lcd_i2c.c)
target_include_directories(TRL_lcd_i2c INTERFACE . ${CMAKE_SOURCE_DIR})
