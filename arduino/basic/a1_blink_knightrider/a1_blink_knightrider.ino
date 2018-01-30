

/* Blinking LEDs: "Knightrider" effect -> by Owen Mundy 2013
---------------------------------------------------------------*/

// LED pins
int ledpin13 = 13;
int ledpin12 = 12;
int ledpin11 = 11;
int ledpin10 = 10;
int ledpin9 = 9;
int ledpin8 = 8;
int pause = 100;

void setup() {
  // set the pins as output 
  pinMode(ledpin13, OUTPUT);   
  pinMode(ledpin12, OUTPUT);  
  pinMode(ledpin11, OUTPUT);  
  pinMode(ledpin10, OUTPUT);  
  pinMode(ledpin9, OUTPUT);     
  pinMode(ledpin8, OUTPUT); 
}

void loop() {
  blinkArray(HIGH,LOW,LOW,LOW,LOW,LOW);
  blinkArray(LOW,HIGH,LOW,LOW,LOW,LOW);
  blinkArray(LOW,LOW,HIGH,LOW,LOW,LOW);
  blinkArray(LOW,LOW,LOW,HIGH,LOW,LOW);
  blinkArray(LOW,LOW,LOW,LOW,HIGH,LOW);
  blinkArray(LOW,LOW,LOW,LOW,LOW,HIGH);
  blinkArray(LOW,LOW,LOW,LOW,HIGH,LOW);
  blinkArray(LOW,LOW,LOW,HIGH,LOW,LOW);
  blinkArray(LOW,LOW,HIGH,LOW,LOW,LOW);
  blinkArray(LOW,HIGH,LOW,LOW,LOW,LOW);
}

void blinkArray(int p8,int p9,int p10,int p11,int p12,int p13){
  
  digitalWrite(ledpin13, p13);
  digitalWrite(ledpin12, p12);
  digitalWrite(ledpin11, p11);
  digitalWrite(ledpin10, p10);
  digitalWrite(ledpin9, p9);
  digitalWrite(ledpin8, p8);
  delay(pause); 
}

