

/* Blinking LED -> by Owen Mundy August 1, 2009 
---------------------------------------------------------------*/

int led = false;            // control variable
int ledpin = 13;            // LED pin

void setup() {
  pinMode(ledpin, OUTPUT);  // sets the digital pin as output
}

void loop() {
  blink(1000,200); // on
  blink(200,200); // off
  blink(200,200); // on
  blink(200,200); // off
  blink(200,200); // on
  blink(200,200); // off
  blink(200,200); // on
  blink(200,200); // off
  blink(200,200); // on
  blink(200,200); // off
}

void blink(int on, int post) {
  if (led == false) {
    led = true;
    digitalWrite(ledpin, HIGH); // on  
    delay(on);
  }
  else {
    led = false;
    digitalWrite(ledpin, LOW); // off 
  }
  delay(post);
}
