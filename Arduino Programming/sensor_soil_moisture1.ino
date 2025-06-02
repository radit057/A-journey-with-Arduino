// Radit Mamnun
// SENSOR-SOIL MOISTURE

int sensor=A0;
int red=7,blue=6,green=5;
void setup()
{
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop()
{ 
  int moisture=analogRead(sensor);
  Serial.println(moisture);
  //Red();
  //Yellow();
  //Green();
  if(moisture>=0 && moisture<=300){
    Red();
  }
  if(moisture>300 && moisture<=600)
  {
    Yellow();
  }
  if(moisture>600){
    Green();
  }
}

void Red()
{
 digitalWrite(red,HIGH);
 digitalWrite(blue,LOW);
 digitalWrite(green,LOW);
}
void Yellow()
{
 digitalWrite(red,HIGH);
 digitalWrite(green,HIGH);
 digitalWrite(blue,LOW);
}

void Green()
{
 digitalWrite(green,HIGH);
 digitalWrite(red,LOW);
 digitalWrite(blue,LOW);
}
  
  