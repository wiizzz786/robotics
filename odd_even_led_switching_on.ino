int x = 73218;
int y = x % 2;
void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
digitalWrite(5, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (y== 0) {
  digitalWrite(5, HIGH);

  
}
else digitalWrite(5,LOW);
}
