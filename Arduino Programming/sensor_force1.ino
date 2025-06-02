// Radit Mamnun
// SENSOR-FORCE

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
  int force=analogRead(sensor);
  Serial.println(force);
  //Red();
  //Yellow();
  //Green();
  if(force>=0 && force<=150){
    Green();
  }
  if(force>150 && force<300)
  {
    Yellow();
  }
  if(force>300){
    Red();
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
  
  