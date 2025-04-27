#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9       // Reset pin for RFID module
#define SS_PIN 10       // Slave Select pin for RFID module

MFRC522 rfid(SS_PIN, RST_PIN); // Create MFRC522 instance


byte knownTag[4] = {0x9B, 0xBE, 0xAF, 0x02};

void setup() {
  Serial.begin(9600);         // Initialize serial communications
  SPI.begin();                // Init SPI bus
  rfid.PCD_Init();            // Init MFRC522
  Serial.println("Place your tag on the reader...");
}

void loop() {
  // Check if a new RFID card is available
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
    delay(50);
    return;
  }
  if (isTagRecognized()) {
    Serial.println("Tag recognized!");
  } else {
    Serial.println("Unknown tag.");
  }
  rfid.PICC_HaltA(); // Halt PICC (tag)
}
bool isTagRecognized() {
  // Check if the UID matches the known tag
  for (byte i = 0; i < 4; i++) {
    if (rfid.uid.uidByte[i] != knownTag[i]) {
      return false;
    }
  }
  return true;
}