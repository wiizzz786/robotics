int ls ;
int ms ;
int rs ;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}
void forward(){
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
}

void back(){
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
}

void brake(){ 
  digitalWrite(5,  LOW);
  digitalWrite(6,  LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
}

void right(){
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
}

void left(){
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
}

void loop() {
  ls = digitalRead(A2);
  ms = digitalRead(A0);
  rs = digitalRead(A1);
  if (ls == 1 && ms == 1 && rs == 1) {
    forward();
  }
  else if (ls == 1 && ms == 1 && rs == 0) {
    back();
    delay(400);
    left();
    delay(400);
  }
  else if (ls == 1 && ms == 0 && rs == 1) {
    back();
    delay(400);
    left();
    delay(400);
  }
  else if (ls == 1 && ms == 0 && rs == 0) {
    back();
    ///delay(400);
    //left();
    //delay(400);
  }
  else if (ls == 0 && ms == 1 && rs == 1) {
    back();
    delay(400);
    right();
    delay(400);
  }
  else if (ls == 0 && ms == 1 && rs == 0) {
    back();
    delay(400);
    right();
    delay(400);
  }
  else if (ls == 0 && ms == 0 && rs == 1) {
    back();
    delay(400);
    left();
    delay(400);
  }
  else if (ls == 0 && ms == 0 && rs == 0) {
    back();
    delay(400);
    right();
    delay(400);
  }
} 
