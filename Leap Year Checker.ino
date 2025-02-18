// C++ code
// Leap Year Checker

void setup() {
  Serial.begin(9600); // Start Serial Monitor
}

void loop() {
  int year = 2023;// Define a year (Fixed missing semicolon)

  // Leap Year Condition Check
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    Serial.print(year);
    Serial.println(" is a leap year.");
  } else {
    Serial.print(year);
    Serial.println(" is not a leap year.");
  }

  Serial.println(""); // Print a blank line for spacing

  delay(3000); // Wait for 3 seconds before repeating
}