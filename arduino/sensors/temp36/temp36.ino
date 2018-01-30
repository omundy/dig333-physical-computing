
/**
 *  Low Voltage Temperature Sensor TMP35/TMP36/TMP37
 *  http://dlnmh9ip6v2uc.cloudfront.net/datasheets/Sensors/Temp/TMP35_36_37.pdf
 *  by Owen Mundy 2012 adapted from code by Aaron Carrillos
 */

int sensorPin = 0;

void setup () {
  pinMode (sensorPin, INPUT);
  Serial.begin (9600);
}

void loop () {
  // read temp sensor
  int reading = analogRead(sensorPin);

  // convert reading to 5v; for 3.3v arduino use 3.3
  float TMPvoltage = reading * 5.0;
  TMPvoltage /= 1024.0; 

  // calculate temp in Celcius
  // converting from 10 mv per degree with 500 mV offset 
  float temperatureC = (TMPvoltage - 0.5) * 100 ; 

  // calculate temp in Fahrenheight
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  
  Serial.println (temperatureF);
  
  delay(1000);
}

