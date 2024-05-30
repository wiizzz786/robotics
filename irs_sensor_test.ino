int a = 0;
void setup() {
pinMode(7, INPUT);
Serial.begin(9600);
}

void loop() {
a = digitalRead(7);
Serial.println(a);
delay(500);

}
