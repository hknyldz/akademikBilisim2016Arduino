int trigPin = 8;
int echoPin = 7;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(3, OUTPUT);
}
void loop() {
  double sure, uzaklik;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);
  Serial.print("sure: ");
  Serial.println(sure);
  uzaklik = (sure / 58.2);
  if (uzaklik < 4) {
    digitalWrite(3, HIGH);
  }
  else {
    digitalWrite(3, LOW);
  }
  if (uzaklik >= 20000 || uzaklik <= 0) {
    Serial.println("Olamaz, Olaamaaaz");
  }
  else {
    Serial.print(uzaklik);
    Serial.println(" cm");
  }
  delay(500);
}
