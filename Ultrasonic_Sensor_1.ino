const int trigPin = 13; //naming a constant value / giving a variable name / #define acts as a find and replace
const int echoPin = 12;
const int redLed = 10;
const int photocell = A2;
int light;







void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT); //trigPin is sending out the signal
  pinMode(echoPin, INPUT); //echoPin is retrieving information, therefore it is INPUT
  pinMode(redLed, OUTPUT); //trigPin is sending out the signal
  pinMode(photocell, INPUT); //echoPin is retrieving information, therefore it is INPUT


}

void loop() {
  long duration, distance, light;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1; //Time it took for the echo to be received and divided in half then divided by the speed of sound

  light = analogRead(photocell);
  
  if(light < 700 && distance < 10){
  
//    Serial.println("work");
    digitalWrite(redLed, HIGH);
                    // wait for a second  
  }
  else{
    digitalWrite(redLed, LOW);
  }
//  Serial.print(distance);
//  Serial.println(" cm");

    Serial.println(light);
//    Serial.println(distance);


}
