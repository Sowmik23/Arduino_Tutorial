#include <Servo.h>

Servo myservo;

int pos =0;



void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);

}

void loop() {
  // put your mai code here, to run repeatedly:
 // myservo.write(90);
  for(pos = 0;pos<=180; pos++)
 {
   myservo.write(pos);
    delay(15);
  }
for(pos = 180;pos>=0; pos--)
 {
   myservo.write(pos);
    delay(15);
  }




  

}
