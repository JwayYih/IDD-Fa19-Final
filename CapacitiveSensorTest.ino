#include <CapacitiveSensor.h>
CapacitiveSensor Sensor1 = CapacitiveSensor(4, 6);
CapacitiveSensor Sensor2 = CapacitiveSensor(4, 7);
CapacitiveSensor Sensor3 = CapacitiveSensor(4, 8);
CapacitiveSensor Sensor4 = CapacitiveSensor(4, 9);

long val1;
long val2;
long val3;
long val4;
int pos1;
int pos2;
int pos3;
int pos4;
#define led1 13
#define led2 12
#define led3 11
#define led4 10


void setup()
{
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}



void loop()
{
val1 = Sensor1.capacitiveSensor(30);
val2 = Sensor2.capacitiveSensor(30);
val3 = Sensor3.capacitiveSensor(30);
val4 = Sensor4.capacitiveSensor(30);
//Serial.println(val);
//LED 1
  if (val1 >= 1000 && pos1 == 0)
  {
    digitalWrite(led1, HIGH);
    pos1 = 1;
    delay(300);
  }

  else if (val1 >= 1000 && pos1 == 1)
  {
    digitalWrite(led1, LOW);
    pos1 = 0;
    delay(300);
  }
  
//LED 2
  else if (val2 >= 1000 && pos2 == 0)
  {
    digitalWrite(led2, HIGH);
    pos2 = 1;
    delay(300);
  }
    else if (val2 >= 1000 && pos2 == 1)
  {
    digitalWrite(led2, LOW);
    pos2 = 0;
    delay(300);
  }
  
//LED 3
  else if (val3 >= 1000 && pos3 == 0)
  {
    digitalWrite(led3, HIGH);
    pos3 = 1;
    delay(300);
  }
    else if (val3 >= 1000 && pos3 == 1)
  {
    digitalWrite(led3, LOW);
    pos3 = 0;
    delay(300);
  }

//LED 4
  else if (val4 >= 1000 && pos4 == 0)
  {
    digitalWrite(led4, HIGH);
    pos4 = 1;
    delay(300);
  }
    else if (val4 >= 1000 && pos4 == 1)
  {
    digitalWrite(led4, LOW);
    pos4 = 0;
    delay(300);
  }
delay(10);
}
