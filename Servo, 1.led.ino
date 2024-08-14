# include<Servo.h>;
Servo myservo;
int value;
int led = 13;
  
void setup  () {
  pinMode (led, OUTPUT);
  myservo.attach(7);
}

void loop () {
   value = analogRead(A0);
   value = map(value,0,1023,0,180);
   myservo.write(value);
   digitalWrite (led, HIGH);
   delay (50);
   digitalWrite (led, LOW);
   delay (50);
}
