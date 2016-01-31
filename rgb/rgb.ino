const int potKirmizi = A0;
const int potMavi = A1;
const int potYesil = A2;
const int ledKirmizi = 3;
const int ledMavi = 5;
const int ledYesil = 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledKirmizi, OUTPUT);
  pinMode(ledMavi, OUTPUT);
  pinMode(ledYesil, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(0, 255, 255);  // aqua
  delay(1000);
}
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(ledKirmizi, red);
  analogWrite(ledYesil, green);
  analogWrite(ledMavi, blue);  
}
