
/* Hello World -> by Owen Mundy 2013
---------------------------------------------------------------*/

void setup() {
  // set up Serial library at 9600 bps
  Serial.begin(9600);           
  // prints hello with ending line break
  Serial.println("Hello world!");   
}

void loop() {
  // print the milliseconds elapsed since we started our sketch
  Serial.println(millis());   
}
