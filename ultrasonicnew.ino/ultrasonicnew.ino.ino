float distance = 0;
unsigned long duration = 0;
int var = 255;
void setup() {

pinMode(2, OUTPUT);
pinMode(3, INPUT);
Serial.begin(9600);
pinMode(5, OUTPUT);

}


void loop() {
 digitalWrite(2, LOW);
 delayMicroseconds(2);
 digitalWrite(2, HIGH);
 delayMicroseconds(10);
 digitalWrite(2, LOW);
 duration = pulseIn(3, HIGH);
 distance = 34460.0* duration / 2000000;
 if (distance < 15 ){
  analogWrite(5, var);
  var = var - 249;
 }
 else if(distance > 80){
  analogWrite(5, var);
  var = var + 10;
 }
 else if(distance > 15 && distance < 30){
  analogWrite(5, var);
  var = var + 10;
 }
 else if(distance > 30 && distance < 60){
  analogWrite(5, var);
  var = var - 10;
 }
  else if(distance > 60 && distance < 75){
  analogWrite(5, var);
  var = var - 10;
 }
 else if(distance > 75 && distance < 80){
  analogWrite(5, var);
  var = var - 10;
  }
  Serial.println(distance);
 }

