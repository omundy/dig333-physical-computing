
/**
 *  Random number generator to test simple
 *  serial communication with Arduino + Processing
 *  by Owen Mundy 2012
 *  Also see Processing sketch(s)
 *  http://owenmundy.com/teaching/code/processing/p5_serial_simple/
 *  http://owenmundy.com/teaching/code/processing/p5_serial_circle/
 */

int randNum;

void setup(){
  Serial.begin(9600);
}

void loop(){
  randNum = random(0,255);  // generate a random number
  Serial.print(randNum);    // send it to the console
  delay(1000);              // wait a second
}
