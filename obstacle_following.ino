float inches = 0;

float cm = 0;
void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
  // put your setup code here, to run once:

}
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void runsonic() {
  cm = 0.01723 * readUltrasonicDistance(2, 3);
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
}
void forward() {
  //analogWrite(11, 213); line one
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
}
void backward() {
  //backward movement bad
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
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

void csensor() {
  int c = digitalRead(A0);
  if (c == 0 ) {
    if(inches =   ) {
      
    }
  }
  else if ((c == 1 )) {
    backward();
    delay(1000);
    right();
    delay(250);
  }
}


void loop() {

}
