// Arduino Code:
// basic example

int time    = 5;             // define delay element  
int pulsewidth;              // define pulsewidth (0-255) 

void setup () {

   pinMode ( 10 , OUTPUT ) ; // tell Arduino to use pin 10 as OUTPUT
   pinMode ( 11 , OUTPUT ) ; // tell Arduino to use pin 11 as OUTPUT
   // you can use other outputs, they must support PWM
}

void loop () {
  
  // slowly fade the LEDs to full brightness  
  for (pulsewidth=150; pulsewidth <= 255; pulsewidth++){  
    analogWrite(10, 0);  
    analogWrite(11, pulsewidth);  
    delay(time);  
  } 
  
  // slowly dim the LEDs  
  for (pulsewidth=255; pulsewidth >= 150; pulsewidth--){  
    analogWrite(10, pulsewidth);  
    analogWrite(11, 0);  
    delay(time);  
  } 

}
