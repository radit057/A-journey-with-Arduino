// Radit Mamnun
// CONTROL SERVO MOTOR WITH FLEX SENSOR

#include<Servo.h>

int servo_pin=7;
int flex_sensor=A0;
Servo myServo;
void setup()
{
  Serial.begin(9600);
  myServo.attach(servo_pin);
}

void loop()
{ 
  int angle_value=analogRead(A0);
  myServo.write(angle_value);
  Serial.println(angle_value);
}

int angle()
{
  int sensor_value=analogRead(A0);
  int angle=map(sensor_value,682,275,0,180);
  return angle;
}