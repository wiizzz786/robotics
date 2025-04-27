void back(){
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11 , OUTPUT); 
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
back();
}
