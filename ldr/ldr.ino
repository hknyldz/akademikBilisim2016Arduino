
const int sensorPin = A0 ;
const int ledPin = 3;
void setup(){
  Serial.begin(9600);
  
}
void loop(){
  int blinkRate = analogRead(sensorPin);
  blinkRate = map(blinkRate, 0,1023,0,255);
  analogWrite(ledPin, 255 - blinkRate);
  Serial.println(blinkRate);
  delay(500);
  
}
