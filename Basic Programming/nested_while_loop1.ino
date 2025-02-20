
void setup() {
  Serial.begin(9600);
  bool outerLoopActive = true; // Control variable for the outer loop

  while (outerLoopActive) {
    if (Serial.available() > 0 && Serial.read() == 's') {
      bool innerLoopActive = true; // Control variable for the inner loop

      while (innerLoopActive) {
        Serial.println("Hello!");

        if (Serial.available() > 0 && Serial.read() == 'b') {
          innerLoopActive = false; // Exit the inner loop
        }
      }

      Serial.println("Loop Broken");
      outerLoopActive = false; // Exit the outer loop after inner loop ends
    }
  }
}

void loop() {
  // Empty loop
}