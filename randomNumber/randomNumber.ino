long randNumber;
void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(0));

}

void loop() {
  // put your main code here, to run repeatedly:
  randNumber = random(256); // 0-256 arası 255 değer üretme
  analogWrite(3, randNumber); //led parlaklık düzeyi kontrol etme
  delay(2000);
  

}
