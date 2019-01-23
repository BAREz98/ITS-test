int ledPin = 4;
void setup() {
pinMode(ledPin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int t=analogRead (A0)/50;
  digitalWrite(ledPin, HIGH);
  delay (t);
  digitalWrite(ledPin,LOW);
  delay(21-t);
  // put your main code here, to run repeatedly:
  }

