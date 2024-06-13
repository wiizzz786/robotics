int data = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);

}

void loop() {
  data = (data + 1)%256;
  analogWrite(11, data);
  analogWrite(10, 0);
  delay(1);
  analogWrite(6, data);
  analogWrite(5, 0);
  delay(1);
 
  
}
