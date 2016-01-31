const int ledPin = 13, butonPin = 2;
boolean butonDeger = 0, ledDeger = false;
#define a 7
#define b 8
#define c 3
#define d 9
#define e 10
#define f 6
#define g 5
int sayac = 0;
int butonDurum = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT); // D
  pinMode(b, OUTPUT);//E
  pinMode(c, OUTPUT); //C
  pinMode(d, OUTPUT); //DT
  pinMode(e, OUTPUT); //G
  pinMode(f, OUTPUT); // F
  pinMode(g, OUTPUT); //A
  pinMode(butonPin, INPUT);
  
  
}
void loop() {
  butonDurum = digitalRead(butonPin);
  if (butonDurum == HIGH) {
    sayac = sayac +1 ;
    while( digitalRead(butonPin) );
    delay(20);
  }
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(8, LOW);
  switch(sayac) {
    case 0:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      
      break;
    case 1:
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;
    case 2:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(d, HIGH);
      
      break;
    case 3:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(d, HIGH);
      
      break;
    case 4:
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;
    case 5:
      digitalWrite(a, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(c, HIGH);
      break;
    case 6:
      digitalWrite(a, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 7:
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(a, HIGH);
      break;
    case 8:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      
      break;
    case 9:
      digitalWrite(b, HIGH);
      digitalWrite(a, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(c, HIGH);
      break;
    default:
      sayac = 0;
  }
}

