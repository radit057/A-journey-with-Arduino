// C++ code
//
void setup()
{
  Serial.begin(9600);
  int i;int target=500;
  int count=0;
   for(i=100;i<=target;i++){
    if(i%7==0){
    Serial.println(i);count++;
  }
  }
  Serial.print("Total numbers divisable by 7 are:");
  Serial.print(count);
}

void loop()
{
  
}