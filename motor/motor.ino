int potPin = A0;
int motorPin = 3;
int potDegeri = 0;
int motorDegeri = 0;
int buzzer = 5; // buzzer
void setup() {
  Serial.begin(9600);
  pinMode (8, OUTPUT); // lazer
}
void loop() {
  potDegeri = analogRead(potPin); 
  motorDegeri = map(potDegeri, 0, 1023, 0, 255);
  analogWrite(motorPin, motorDegeri);
  Serial.print("Potansiyometre = " );
  Serial.print(potDegeri); // pot değeri yazdırma
  Serial.print("\t motor = ");
  Serial.println(motorDegeri); // motor değer yazdırma
  analogWrite(ba, potDegeri ); // buzzer pot değerinde ses çıkartıyor.
  digitalWrite (8, HIGH); //lazer
  delay(2000);
  digitalWrite (8, LOW); //LAZER

}

