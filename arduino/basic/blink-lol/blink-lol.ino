int ledPin = 13;
int pause = 300;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {

  flash(200); flash(200); flash(500);flash(200); 
  delay(pause); // pause
  flash(500); flash(500); flash(500);             // O
  delay(pause); // pause
  flash(500); flash(500); flash(500); 
  delay(1000);

}

void flash(int duration)
{
  digitalWrite(ledPin, HIGH);
  delay(duration);
  digitalWrite(ledPin, LOW);
  delay(pause);
}
