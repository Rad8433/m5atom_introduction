#include <Arduino.h>

#include <fastLED.h>


CRGB monPixel;

void setup() {
  FastLED.addLeds<WS2812,27,GRB>( &monPixel,1);
}

void loop() {
  monPixel = CRGB(0,222,255);
  FastLED.show();
  delay(2000);
  monPixel = CRGB(0,0,0);
  FastLED.show();
  delay(2000);
}