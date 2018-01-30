


/* POT to LED test -> by Owen Mundy March 11, 2010
   from: http://itp.nyu.edu/physcomp/Labs/AnalogIn
---------------------------------------------------------------*/

int potPin = 0;    // Analog input pin that the potentiometer is attached to
int potValue = 0;  // value read from the pot
int led = 9;      // PWM pin that the LED is on.  n.b. PWM 0 is on digital pin 9

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  // declare the led pin as an output:
  pinMode(led, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin); // read the pot value
  analogWrite(led, potValue/4);  // PWM the LED with the pot value (divided by 4 to fit in a byte)
  Serial.println("hello");      // print the pot value back to the debugger pane
  delay(10);                     // wait 10 milliseconds before the next loop
}

