#ifndef FOURTEEN_SEGMENT_DIGIT
#define FOURTEEN_SEGMENT_DIGIT
#include <FastLED.h>

class fourteen_segment_digit
{
private:
    int pin = -1;   //pin this digit is connected to
    uint8_t numLongSegment = 0; //how many leds are in a long (diagonal) segment
    uint8_t numShortSegment = 0;    //how many leds are in a short (horizontal/vertical) segment
    uint8_t numMiddleGap = 0;   //number of leds between the two half length segments in the middle
    uint8_t totalLEDs = 0;  //total leds in strip
    CRGB *stripPtr;
public:
    fourteen_segment_digit();
    bool begin(int newPin, CRGB *newPtr, uint8_t longCount, uint8_t shortCount, uint8_t newGap);
    void setChar(char newChar, uint8_t r, uint8_t g, uint8_t b);
    void erase();
    void fill(uint8_t r, uint8_t g, uint8_t b);
};



#endif  //FOURTEEN_SEGMENT_DIGIT