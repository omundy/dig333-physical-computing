

/* Blinking LED -> by Owen Mundy August 1, 2009 
 ---------------------------------------------------------------*/

int led = false;            // control variable
int ledpin = 13;            // LED pin

void setup()
{
  pinMode(9, OUTPUT);  // sets the digital pin as output
  pinMode(10, OUTPUT);  // sets the digital pin as output
  pinMode(11, OUTPUT);  // sets the digital pin as output
  pinMode(12, OUTPUT);  // sets the digital pin as output
  pinMode(13, OUTPUT);  // sets the digital pin as output
}

void loop()
{
  for (int i=9; i<14; i++)
  {
    blink(i);
    delay(100);              // wait one second
  }
}



void blink(int ledpin)
{
  digitalWrite(ledpin, HIGH); // on  
  delay(300);
  digitalWrite(ledpin, LOW); // off 
}

