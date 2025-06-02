// Radit Mamnun
// Motor
//Speed & Direction Control

int p=10,n=11;
void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  analogWrite(p,255);
  analogWrite(n,0);
  delay(2000);
  analogWrite(p,0);
  analogWrite(n,120);
  delay(2000);
}
