

/* Blinking LED -> by Owen Mundy August 1, 2009 
---------------------------------------------------------------*/

int ledpin = 10;              // LED pin

void setup() {
  pinMode(ledpin, OUTPUT);    // sets the digital pin as output
}

void loop() {
  digitalWrite(ledpin, HIGH); // on  
  delay(1000);                // wait one second
  digitalWrite(ledpin, LOW);  // off 
  delay(1000);                // wait one second
}



