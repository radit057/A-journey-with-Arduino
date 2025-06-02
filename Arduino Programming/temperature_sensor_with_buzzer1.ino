// Radit Mamnum
//Temperature Sensor with Buzzer

int temp_pin=A0;
int buzzer_pin=7;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzer_pin,OUTPUT);
}

void loop()
  
{
  int temp=temperature();
  Serial.println(temp);
  if (temp>100 || temp<=10)
  { digitalWrite(buzzer_pin,HIGH);
   Serial.println("Buzzer is on");   
  }
}
  int temperature(){
    int t=analogRead(temp_pin);
    return map(t,20,358,-40,125);
  
  } 