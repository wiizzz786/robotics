int a = 0;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  a = digitalRead(A0);
  Serial.println(a);
  if (a == 1) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
  }
  else {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  }
}


