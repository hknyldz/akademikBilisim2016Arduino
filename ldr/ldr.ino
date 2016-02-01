
const int sensorPin = A0 ;

void setup(){
  Serial.begin(9600);
}
void loop(){
  int blinkRate = analogRead(sensorPin);
  Serial.println(blinkRate);
  delay(500);
  
}
