#include "fourteen_segment_digit.h"

fourteen_segment_digit::fourteen_segment_digit() {

}

bool fourteen_segment_digit::begin(int newPin, CRGB *newPtr, uint8_t longCount, uint8_t shortCount, uint8_t newGap) {
    this->pin = newPin;
    this->stripPtr = newPtr;
    this->numLongSegment = longCount;
    this->numShortSegment = shortCount;
    this->numMiddleGap = newGap;
    this->totalLEDs = 4*longCount + 9*shortCount
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
