//String

void setup()
{
  
  Serial.begin(9600);
  String s1 = "Hello World";
  
  int len =s1.length();
  Serial.println(len);
  
}
void loop()
{
}