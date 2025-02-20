// C++
// Class

class Calculation {
  int a, b, c;

public:
  // Method to set the values of a, b, and c
  void set(int n1, int n2, int n3) {
    a = n1;
    b = n2;
    c = n3;
  }

  // Method to calculate and print the sum of a, b, and c
  void sum() {
    Serial.print("Sum: ");
    Serial.println(a + b + c);
  }

  // Method to calculate and print the multiplication of a, b, and c
  void multiply() {
    Serial.print("Multiplication: ");
    Serial.println(a * b * c);
  }

  // Method to determine and print the largest number among a, b, and c
  void largestNumber() {
    if (a >= b && a >= c) {
      Serial.print(a);
      Serial.println(" is the largest");
    } else if (b >= a && b >= c) {
      Serial.print(b);
      Serial.println(" is the largest");
    } else {
      Serial.print(c);
      Serial.println(" is the largest");
    }
  }
};

void setup() {
  Serial.begin(9600);
  Calculation calc; // Create an instance of the Calculation class
  calc.set(10, 20, 30); // Set the values of a, b, and c
  calc.sum(); // Call the sum method
  calc.multiply(); // Call the multiply method
  calc.largestNumber(); // Call the largestNumber method
}

void loop() {
  // Empty loop
}
