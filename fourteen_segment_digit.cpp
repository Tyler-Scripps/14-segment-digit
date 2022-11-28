#include "fourteen_segment_digit.h"

// the leds are wired up as so
//
//      9
//  1_______2
//  |\  |10/|
// 8| \ | / |3
//  |  \|/  |
// 14——— ———13
//  |  /|\  |
// 7| / | \ |4
//  |/  |11\| 
//  6———————5
//      12

// the alphanumeric_segs array is using a clockwise labeling scheme

//      a
//  i_______k
//  |\  |j /|
// f| \ | / |b
//  |  \|/  |
//  g———————h
//  |  /|\  |
// e| / | \ |c
//  |/  |m \| 
//  n———————l
//      d

fourteen_segment_digit::fourteen_segment_digit() {

}

int fourteen_segment_digit::begin(CRGB newPtr[], uint8_t longCount, uint8_t shortCount, uint8_t newGap) {
    this->stripPtr = newPtr;
    this->numLongSegment = longCount;
    this->numShortSegment = shortCount;
    this->numMiddleGap = newGap;
    this->totalLEDs = 4*longCount + 9*shortCount;

    this->segments[0][0] = ; //a (9)
    this->segments[0][1] = ; //a (9)
    this->segments[1][0] = 2*longCount + 0*shortCount; //b (3)
    this->segments[1][1] = 2*longCount + 0*shortCount + shortCount - 1; //b (3)
    this->segments[2][0] = 2*longCount + 1*shortCount; //c (4)
    this->segments[2][1] = 2*longCount + 1*shortCount + shortCount - 1; //c (4)
    this->segments[3][0] = ; //d (12)
    this->segments[3][1] = ; //d (12)
    this->segments[4][0] = ; //e (7)
    this->segments[4][1] = ; //e (7)
    this->segments[5][0] = ; //f (8)
    this->segments[5][1] = ; //f (8)
    this->segments[6][0] = ; //g (14)
    this->segments[6][1] = ; //g (14)
    this->segments[7][0] = ; //h (13)
    this->segments[7][1] = ; //h (13)
    this->segments[8][0] = 0; //i (1)
    this->segments[8][1] = 0*longCount + 0*shortCoutnt + longCount - 1; //i (1)
    this->segments[9][0] = ; //j (10)
    this->segments[9][1] = ; //j (10)
    this->segments[10][0] = 1*longCount + 0*shortCount; //k (2)
    this->segments[10][1] = 1*longCount + 0*shortCount + longCount - 1; //k (2)
    this->segments[11][0] = 2*longCount + 2*shortCount; //l (5)
    this->segments[11][1] = 2*longCount + 2*shortCount + longCount - 1; //l (5)
    this->segments[12][0] = ; //m (11)
    this->segments[12][1] = ; //m (11)
    this->segments[13][0] = 3*longCount + 2*shortCount; //n (6)
    this->segments[13][1] = ; //n (6)

    return this->totalLEDs;
}

void fourteen_segment_digit::setChar(char newChar, uint8_t r, uint8_t g, uint8_t b) {

}

void fourteen_segment_digit::erase() {
    for (uint8_t i = 0; i < this->totalLEDs; i++)
    {
        this->stripPtr[i].r = 0;
        this->stripPtr[i].g = 0;
        this->stripPtr[i].b = 0;
    }
}

void fourteen_segment_digit::fill(uint8_t r, uint8_t g, uint8_t b) {
    for (uint8_t i = 0; i < this->totalLEDs; i++)
    {
        this->stripPtr[i].r = r;
        this->stripPtr[i].g = g;
        this->stripPtr[i].b = b;
    }
}
