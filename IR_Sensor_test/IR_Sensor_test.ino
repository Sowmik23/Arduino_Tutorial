#include <Servo.h>

#define sensor A0


void setup() {

  pinMode(sensor, INPUT);

  delay(200);

  Serial.begin(9600);
}

void loop() {
  int   readsen = analogRead(sensor);

  Serial.print("Color : ");
  Serial.println(readsen);

  if (readsen > 800)
  {
    //do something
  }


}
