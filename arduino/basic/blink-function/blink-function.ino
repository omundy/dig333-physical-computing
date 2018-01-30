

/* Blinking LED -> by Owen Mundy August 1, 2009 
---------------------------------------------------------------*/

int led = false;            // control variable
int ledpin = 13;            // LED pin

void setup() {
  pinMode(ledpin, OUTPUT);  // sets the digital pin as output
}

void loop() {
  blink();
  delay(1000);              // wait one second
}

// a custom function to control blinking
void blink() {
  if (led == false) {
    led = true;
    digitalWrite(ledpin, HIGH); // on  
  }
  else {
    led = false;
    digitalWrite(ledpin, LOW); // off 
  }
}
