#include <Keypad.h>
#include <Servo.h>

Servo myServo;  // Create a Servo object

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
    { '1', '2', '3', 'A' },
    { '4', '5', '6', 'B' },
    { '7', '8', '9', 'C' },
    { '*', '0', '#', 'D' }
};

byte rowPins[ROWS] = { 9, 8, 7, 6 };  // Connect to the row pinouts of the keypad
byte colPins[COLS] = { 5, 4, 3, 2 };  // Connect to the column pinouts of the keypad

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
    myServo.attach(10);  // Attach the servo on pin 10
}

void loop() {
    char customKey = customKeypad.getKey();
    if (customKey) {
        if (customKey == '1') {
            myServo.write(0);   // Move servo to 0 degrees
        } else if (customKey == '2') {
            myServo.write(90);  // Move servo to 90 degrees
        } else if (customKey == '3') {
            myServo.write(180); // Move servo to 180 degrees
        }
        // Add more key actions if needed
    }
}
