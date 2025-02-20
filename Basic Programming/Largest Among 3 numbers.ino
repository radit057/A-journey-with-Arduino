// C++ code
// Increment and Decrement Example

void setup() {
  Serial.begin(9600); 
}

void loop() {
  
  int n1,n2,n3; 
 
    n1=1000;
    n2=500;
    n3=200;
  
  if(n1>n2 && n1>n3){
    Serial.print(n1);Serial.print(" is largest.");
  }
     if(n2>n1 && n2>n3){
    Serial.print(n2);Serial.print(" is largest.");
     }
        if(n3>n1 && n3>n2){
    Serial.print(n3);Serial.print(" is largest.");
        }
       
       Serial.println(" ");
     }
  
