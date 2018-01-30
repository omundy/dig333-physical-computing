#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.clearPixels();

  int speed = 100;
  int nextColorSpeed = 100;
  /*
  int newArray() {
    int leds[10] = {0,1,2,3,4,5,6,7,8,9};
    return leds;
  }
*/

  // red
  for (int i = 0; i < 50; i++){
    CircuitPlayground.setPixelColor(i, 255, 0,0); // red
    delay(speed);
  }
  delay(nextColorSpeed);

  for (int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, 0xff9900); // orange
    delay(speed);
  }
  delay(nextColorSpeed);

  for (int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, 0xe6e600); // yellow
    delay(speed);
  }
  delay(nextColorSpeed);

  for (int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, 0x009933); // green
    delay(speed);
  }
  delay(nextColorSpeed);

  for (int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, 0x0033cc); // blue
    delay(speed);
  }
  delay(nextColorSpeed);

  for (int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, 0x6600cc); // dk purple
    delay(speed);
  }
  delay(nextColorSpeed);

  for (int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, 0x660066); // dk pink
    delay(speed);
  }
  delay(nextColorSpeed);

  for (int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, 0xff33ff); // lt pink
    delay(speed);
  }
  delay(nextColorSpeed);




/*
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 128, 128,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 128, 128);
  CircuitPlayground.setPixelColor(4,   0,   0, 255);
  
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0x808000);
  CircuitPlayground.setPixelColor(7, 0x00FF00);
  CircuitPlayground.setPixelColor(8, 0x008080);
  CircuitPlayground.setPixelColor(9, 0x0000FF);
 */
 
  delay(2000);
}
