// C++ code
// Finding Positive number

void setup() {
  Serial.begin(9600); // Start Serial Monitor
}

void loop() {
  int n=1;
  if(n==0){
    Serial.print(n);Serial.print(" is Zero");
  }
  else if (n>0){
    Serial.print(n);Serial.print(" is a positive number");
  }
  else 
  {
    Serial.print(n);Serial.print(" is a negative number");
  }
  Serial.println(" ");
}
