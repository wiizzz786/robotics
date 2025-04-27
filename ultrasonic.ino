float distance = 0;
unsigned long duration = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, INPUT);
Serial.begin(9600);

}ec ho pin 3
trig pin 2

void loop() {
 digitalWrite(2, LOW);
 delayMicroseconds(10);
 digitalWrite(2, HIGH);
 delayMicroseconds(2);
 digitalWrite(2, LOW);
 duration = pulseIn(3, HIGH);
 distance = 34460.0* duration / 2000000
 Serial.println(distance);
 delay(100);
 
 
 
}
