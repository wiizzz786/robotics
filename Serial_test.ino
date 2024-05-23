int a = 15;
int b = 25;
int c = a + b;
void setup() {
  // put your setup code here, to run {
  Serial.begin(9600);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(c);
  delay(2000);

}
