#include <IRremote.h>
int x = 0;
int b = 5;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(9);
  pinMode(5, OUTPUT);
}

void loop() {
  if (IrReceiver.decode()) {
    x = IrReceiver.decodedIRData.command;
    //Serial.println(x);
    if (x == 21) {
      analogWrite(5, b);
      b = b + 5;
      b = constrain(b, 0, 255);
    } else if (x == 7) {
      analogWrite(5, b);
      b = b - 5;
      b = constrain(b, 0, 255);
    }
    IrReceiver.resume();
  }
}
