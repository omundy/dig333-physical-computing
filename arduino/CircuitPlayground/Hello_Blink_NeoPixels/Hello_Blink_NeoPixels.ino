#include <Adafruit_CircuitPlayground.h>

int pix = 1; // 0-9
int r = 0; // 0-255
int g = 0; // 0-255
int b = 255; // 0-255

void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600); // open the serial port
}

void loop() {
  for (int i=0; i <= 10; i++){
    pix = i;
    r = random(255);
    g = random(255);
    b = random(255);
    Serial.println(pix); 
    CircuitPlayground.setPixelColor(pix, r, g, b);
    delay(50);
  }
  CircuitPlayground.clearPixels();
  delay(500);
}
