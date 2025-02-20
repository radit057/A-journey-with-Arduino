//c++
//Function

void setup()
{
  Serial.begin(9600);
  
int a=Sum(5,6);
  
  Serial.println(a);
  
}

void loop() {

}

int Sum(int a,int b){
  int sum=a+b;
  return sum;
}