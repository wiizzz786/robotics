int a = 15;
int b = 25;
int c = 78;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  }
void loop() {
 if (c > a || c > b) {
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);
 }
 else if (a > c || a > b){
 digitalWrite(12, HIGH);
 delay(1000);
 }
 else {
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
   }
 }
