/*
 * nvram.h
 *
 * Created: 07/08/2019
 * Author : Richard Tomlinson G4TGJ
 */ 
 

#ifndef NVRAM_H
#define NVRAM_H

#include <inttypes.h>
#include "morse.h"

// Backlight mode
enum eBacklightMode
{
    backlightOff = 0,
    backlightOn,
    backlightAuto,
    NUM_BACKLIGHT_MODES
};

// Transmit/receive mode
enum eTRXMode
{
    cwMode = 0,
    cwRevMode,
    lsbMode,
    usbMode,
    NUM_TRX_MODES
};

void nvramInit();

uint8_t nvramReadWpm();
void nvramWriteWpm( uint8_t wpm );

uint32_t nvramReadXtalFreq();
void nvramWriteXtalFreq( uint32_t freq );

uint32_t nvramReadIntermediateFreq();
void nvramWriteIntermediateFreq( uint32_t freq );

enum eMorseKeyerMode nvramReadMorseKeyerMode();
void nvramWriteMorseKeyerMode( enum eMorseKeyerMode );

uint8_t nvramReadBand();
void nvramWriteBand( uint8_t band );

enum eTRXMode nvramReadTRXMode();
void nvramWriteTRXMode( enum eTRXMode bCWReverse );

enum eBacklightMode nvramReadBacklighMode();
void nvramWriteBacklightMode( enum eBacklightMode );

uint8_t nvramReadSidetoneVolume();
void nvramWriteSidetoneVolume( uint8_t volume );

#endif //NVRAM_H
