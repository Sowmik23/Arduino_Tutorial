#include <Servo.h>


int En_A = 5;  //speed motor a
int n1 = 6; //motor a = +
int n2 = 7; //motor a = -

int n3 = 9; //motor b = -
int n4 = 10; //motor b = +
int En_B = 8;  //speed motor b

//const int trigPin = 11;
//const int echoPin = 12;



void setup() {

  //pinMode(sensor, INPUT);
  pinMode(n3, OUTPUT);
  pinMode(n4, OUTPUT);
  pinMode(n1, OUTPUT);
  pinMode(n2, OUTPUT);
  pinMode(En_B, OUTPUT);
  pinMode(En_A, OUTPUT);

  //pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  //pinMode(echoPin, INPUT); // Sets the echoPin as an Input


  analogWrite(En_A, 250);
  analogWrite(En_B, 250);

  delay(200);

  Serial.begin(9600);
}

void loop() {
  forward();
  delay(500);

  turnRight();

  
  delay(1200);

}

void forward() {
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, HIGH);
  digitalWrite(n4, LOW);
  //delay(100);
}

void back() {
  digitalWrite(n1, HIGH);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
  digitalWrite(n4, HIGH);
  //delay(2000);
}


void turnRight() {
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, HIGH);
  digitalWrite(n4, LOW);
  // delay(70);
}

void turnLeft() {
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
  digitalWrite(n4, LOW);
  //delay(70);
}

void stopp() {
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
  digitalWrite(n4, LOW);
  delay(100);
}
