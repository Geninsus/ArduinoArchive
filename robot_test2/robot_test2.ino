#include <Servo.h>

Servo monservo;
int captg2 = A1;
int captg = A2;
int captd = A3;
int captd2 = A4;
int etatg2 = 0;
int etatg = 0;
int etatd = 0;
int etatd2 = 0;
int servog = 9;
int servod = 3;
int val = -70; /* valeur comprise entre [-360 ; 360]
                  mini en negatif -5
                  mini en positif +5
               */
 
void setup()
{
  monservo.attach(6);
  pinMode(captg2,INPUT);
  pinMode(captg,INPUT);
  pinMode(captd,INPUT);
  pinMode(captd2,INPUT);
  pinMode(servog,OUTPUT);
  pinMode(servod,OUTPUT);
  monservo.write(90);
  val = map(val, -360, 360, 900, 2020);
}
 
void loop()
{
  
  if ((HIGH == digitalRead(captg)) && (HIGH == digitalRead(captg2)) && (HIGH == digitalRead(captd)) && (HIGH == digitalRead(captd2)))
  { 
    monservo.write(90);
    int pulseTime = val;
    digitalWrite(servog, HIGH);
    digitalWrite(servod, HIGH);
    delayMicroseconds(pulseTime);
    digitalWrite(servog, LOW);
    digitalWrite(servod, LOW);
    delay(25);
  }
  if ((LOW == digitalRead(captg)) && (HIGH == digitalRead(captg2)) && (HIGH == digitalRead(captd)) && (HIGH == digitalRead(captd2)))
  {
    monservo.write(110);
    int pulseTime = val;
    digitalWrite(servog, HIGH);
    digitalWrite(servod, HIGH);
    delayMicroseconds(pulseTime);
    digitalWrite(servog, LOW);
    digitalWrite(servod, LOW);
    delay(25);
  }
    if ((HIGH == digitalRead(captg)) && (HIGH == digitalRead(captg2)) && (LOW == digitalRead(captd)) && (HIGH == digitalRead(captd2)))
  {
    monservo.write(70);
    int pulseTime = val;
    digitalWrite(servog, HIGH);
    digitalWrite(servod, HIGH);
    delayMicroseconds(pulseTime);
    digitalWrite(servog, LOW);
    digitalWrite(servod, LOW);
    delay(25);
  }
      if ((LOW == digitalRead(captg2) && (HIGH == digitalRead(captd2))))
  {
    monservo.write(130);
    int pulseTime = val;
    digitalWrite(servog, HIGH);
    digitalWrite(servod, HIGH);
    delayMicroseconds(pulseTime);
    digitalWrite(servog, LOW);
    delayMicroseconds(120);
    digitalWrite(servod, LOW);
    delay(25);
  }
      if ((HIGH == digitalRead(captg2) && (LOW == digitalRead(captd2))))
  {
    monservo.write(60);
    int pulseTime = val;
    digitalWrite(servog, HIGH);
    digitalWrite(servod, HIGH);
    delayMicroseconds(pulseTime);
    digitalWrite(servod, LOW);
    delayMicroseconds(120);
    digitalWrite(servog, LOW);
    delay(25);
  }
}
