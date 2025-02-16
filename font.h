/*
 * font.h
 *
 * Created: 30/06/2024
 * Author : Richard Tomlinson G4TGJ
 */ 

enum
{
    fontSwiss721outline,
    fontSinclairS,
    fontDotmatrixM,
    fontArialRound16x24,
    fontArialBold,
    fontGrotesk16x32,
    fontGroteskBold16x32,
    fontRetro16x32,
    NUM_FONTS
};

const uint8_t *getFont( int fontNum );
const int getFontHeight( int fontNum );
const int getFontWidth( int fontNum );
const int getFontFirstChar( int fontNum );
const int getFontNumChars( int fontNum );
