int analogInPin = A0; // Sensörün bağlandığı pin



void setup() {

  Serial.begin(9600); // İletisim hızını 9600 bps hızına ayarlıyoruz
}

void loop() {

  int sensorDegeri = analogRead(analogInPin);  // Analog değeri oku ve “sensorDegeri” ne ata
  Serial.print("sensor = ");  //  Sensor yazısını bilgisayara gönder.

  Serial.print(sensorDegeri); // Analog değeri bilgisayara gönder.
  Serial.println(); // Satır atla

  delay(2); // 2 Ms bekle
}
