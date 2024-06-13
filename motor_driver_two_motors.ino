void setup() {
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);  
}

void loop() {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(3000);

  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(3000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(3000);


  
}
