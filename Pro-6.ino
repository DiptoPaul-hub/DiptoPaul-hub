

const int trig = 9;
const int echo = 10;

const int buzzer1 = 11;
const int buzzer2 = 6;
const int buzzer3 = 5;
const int led = 13;

long duration;
int distance;

//int duration = 0;
//int distance = 0;

void setup() {
 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
 pinMode(buzzer1, OUTPUT);
 pinMode(buzzer2, OUTPUT);
 pinMode(buzzer3, OUTPUT);
 pinMode(led, OUTPUT);
 
 Serial.begin(9600);
}


void loop() {
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 25.5 ;
  Serial.println(distance);

  if ( distance <= 25 )
  {
  digitalWrite(buzzer1, HIGH);
  digitalWrite(led, HIGH);
  }
  else{
  digitalWrite(buzzer1, LOW);
  digitalWrite(led, LOW);
  }

  if ( distance <= 15 )
  {
    digitalWrite(buzzer2, HIGH);
  }
  else
  {
    digitalWrite(buzzer2, LOW);
  }
  if ( distance <= 5 )
  {
    digitalWrite(buzzer3, HIGH);
  }
  else
  {
    digitalWrite(buzzer3, LOW);
  }

  Serial.print("Distance: ");
  Serial.println(distance);
}
