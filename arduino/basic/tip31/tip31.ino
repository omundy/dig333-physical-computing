 
/**
 *  Using a TIP31 to turn an LED on and off
 *  by Owen Mundy 2012
 */

int switchPin = 10;

void setup(){
  pinMode(switchPin,OUTPUT);
}

void loop(){
  digitalWrite(switchPin, LOW);   // turn LED OFF
  delay(1000);  
  digitalWrite(switchPin, HIGH);  // turn LED ON
  delay(1000);  
}

