void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  // put your setup code here, to run once:

}

void forward() {
  //analogWrite(11, 213); line one
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6,LOW);
}
void backward() {
  //backward movement bad
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
}
void stop1() {
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
}
void right() {
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}
void left() {
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
}



void loop(){
  int c = digitalRead(A1);
  int l = digitalRead(A2);
  int r = digitalRead(A0);
  if (c == )
}


