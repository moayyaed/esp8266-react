#ifndef STRIP_H
#define STRIP_H

#include <Arduino.h>
#include <FastLED.h>

const uint16_t LED_GAMMA_ADJUSTMENT[] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  3,  3,
    3,  3,  4,  4,  4,  5,  5,  5,  6,  6,  7,  7,  7,  8,  8,  9,
   10, 10, 11, 11, 12, 13, 13, 14, 15, 15, 16, 17, 18, 19, 20, 20,
   21, 22, 23, 24, 25, 26, 27, 29, 30, 31, 32, 33, 35, 36, 37, 38,
   40, 41, 43, 44, 46, 47, 49, 50, 52, 54, 55, 57, 59, 61, 63, 64,
   66, 68, 70, 72, 74, 77, 79, 81, 83, 85, 88, 90, 92, 95, 97,100,
  102,105,107,110,113,115,118,121,124,127,130,133,136,139,142,145,
  149,152,155,158,162,165,169,172,176,180,183,187,191,195,199,203,
  207,211,215,219,223,227,232,236,240,245,249,254,258,263,268,273,
  277,282,287,292,297,302,308,313,318,323,329,334,340,345,351,357,
  362,368,374,380,386,392,398,404,410,417,423,429,436,442,449,455,
  462,469,476,483,490,497,504,511,518,525,533,540,548,555,563,571,
  578,586,594,602,610,618,626,634,643,651,660,668,677,685,694,703,
  712,721,730,739,748,757,766,776,785,795,804,814,824,833,843,853,
  863,873,884,894,904,915,925,936,946,957,968,979,990,1001,1012,1023 };

  class Strip {

  private:
        uint8_t redPin;
        uint8_t greenPin;
        uint8_t bluePin;

   public:
    Strip(uint8_t redPin, uint8_t greenPin, uint8_t bluePin);
    void renderRGB(CRGB color, uint8_t brightness);
};


#endif
