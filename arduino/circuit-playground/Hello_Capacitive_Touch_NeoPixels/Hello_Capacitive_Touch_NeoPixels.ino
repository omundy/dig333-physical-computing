#include <Adafruit_CircuitPlayground.h>

int pix = 1; // 0-9
int r = 0, g = 0, b = 255; // 0-255
int pin1;
int capThreshold = 20;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  for (int i = 0; i <= 10; i++) {
    
    pin1 = CircuitPlayground.readCap(1);
    if (pin1 > capThreshold) {
      CircuitPlayground.playTone(pin1 * 5, 100);
      Serial.println(pin1);
    }

    pix = i;
    r = pin1+15;
    g = 15;
    b = 255/pin1;
    CircuitPlayground.setPixelColor(pix, r, g, b);
    
    delay(100);
    CircuitPlayground.clearPixels();
  }
}

