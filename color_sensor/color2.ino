//Color sensor testing
 
#define S0 2
#define S1 3
#define S2 4
#define S3 5
#define sensorOut 8

int frequency = 0;

int R,G,B;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  
  Serial.begin(9600);
}

void loop() {
  
  // Setting red filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  
  
  frequency = pulseIn(sensorOut, LOW);    // reading output frequency
  
  // Printing the value on the serial monitor
  Serial.print("R= ");  //printing name
  Serial.print(frequency);   //printing RED color frequency
  R = frequency;
  Serial.print("  ");
  delay(100);

  // Setting Green filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  
  
  frequency = pulseIn(sensorOut, LOW);   
  Serial.print("G= ");
  Serial.print(frequency);
  G = frequency;
  Serial.print("  ");
  delay(100);

  // Setting Blue filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  
  
  frequency = pulseIn(sensorOut, LOW);
  
  Serial.print("B= ");
  Serial.print(frequency);
  B = frequency;
  Serial.println("  ");

   if( (R>=320 && R<=350) && (G>=600 && G<=690) && (B>=130 && B<=145) )
   {
      digitalWrite(LED_BUILTIN, HIGH);
   }
   else 
   {
      digitalWrite(LED_BUILTIN, LOW);
   }

  
  delay(2000);
}
