/*
 * font.c
 *
 * Created: 30/06/2024
 * Author : Richard Tomlinson G4TGJ
 */ 

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>

#include "font.h"
#include "font_sinclair_s.h"
#include "font_arial_bold.h"
#include "font_dotmatrix_m.h"
#include "font_swiss721_outline.h"
#include "font_grotesk_bold16x32.h"
#include "font_retro16x32.h"
#include "font_arial_round_16x24.h"
#include "font_grotesk16x32.h"

// First few bytes of the font are some header info
#define FONT_HEADER_LEN 4

// Indexes into the font array
#define FONT_WIDTH_INDEX     0
#define FONT_HEIGHT_INDEX    1
#define FONT_FIRST_INDEX     2
#define FONT_NUM_CHARS_INDEX 3

static const uint8_t *font[NUM_FONTS] =
{
    font_swiss721_outline,
    font_sinclair_s,
    font_dotmatrix_m,
    font_arial_round_16x24,
    font_arial_bold,
    font_Grotesk16x32,
    font_GroteskBold16x32,
    font_retro16x32,
};

static const uint8_t *getFontBase( int fontNum )
{
    if( fontNum > 0 && fontNum < NUM_FONTS )
    {
        return font[fontNum];
    }
    else
    {
        return NULL;
    }
}

const uint8_t *getFont( int fontNum )
{
    const uint8_t *fontBase = getFontBase( fontNum );
    if( fontBase )
    {
        return &fontBase[FONT_HEADER_LEN];
    }
    else
    {
        return NULL;
    }
}

const int getFontHeight( int fontNum )
{
    const uint8_t *fontBase = getFontBase( fontNum );
    if( fontBase )
    {
        return fontBase[FONT_HEIGHT_INDEX];
    }
    else
    {
        return 0;
    }
}

const int getFontWidth( int fontNum )
{
    const uint8_t *fontBase = getFontBase( fontNum );
    if( fontBase )
    {
        return fontBase[FONT_WIDTH_INDEX];
    }
    else
    {
        return 0;
    }
}

const int getFontFirstChar( int fontNum )
{
    const uint8_t *fontBase = getFontBase( fontNum );
    if( fontBase )
    {
        return fontBase[FONT_FIRST_INDEX];
    }
    else
    {
        return 0;
    }
}

const int getFontNumChars( int fontNum )
{
    const uint8_t *fontBase = getFontBase( fontNum );
    if( fontBase )
    {
        return fontBase[FONT_NUM_CHARS_INDEX];
    }
    else
    {
        return 0;
    }
}
