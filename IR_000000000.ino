#include <Servo.h>

const int buttonPin = 8;
const int servoPin = 9;

int buttonState = 0;
int directionState = 0;

Servo servoOne;

int pos = 0;

void setup() 
{
  servoOne.attach(9);
  servoOne.write(directionState);
  pinMode(buttonPin, INPUT);
}

void loop() 
{
 buttonState = digitalRead(buttonPin);

  if(directionState == 0)
  {
    if(buttonState == HIGH)
    {
      directionState = 1;
      for(pos = 0; pos < 170; pos=pos+1)
      {
        servoOne.write(pos);
        delay(5);
      }
    }
  }

  else if(directionState == 1)
  {
    if(buttonState == LOW)
    {
     directionState = 0;
     for(pos = 176 0; pos > 1; pos=pos-1)
     {
        servoOne.write(pos);
        delay(5);
     }
    }
  }
}
