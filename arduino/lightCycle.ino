int pinA = 13;
int pinB = 12;
int pinC = 11;
int pinD = 10;
int pinE = 9;
int pinF = 8;
int pinG = 7;
int pinH = 6;
int fan = A5;

void setup() {
  // This sets up the 
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinH, OUTPUT);
  pinMode(fan, OUTPUT);

  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(fan, HIGH);
}

void loop() {
  digitalWrite(fan, HIGH);

  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  delay(100);

  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  delay(100);

  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  delay(100);

  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  delay(100);

  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  delay(100);

  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(100);

  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  delay(100);

  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, LOW);
  delay(100);

  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  delay(100);

  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  delay(100);

  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  delay(100);

  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  delay(100);

  digitalWrite(pinC, LOW);
}
