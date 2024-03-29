#define ML1 6
#define ML2 5
#define MLM A0
#define MR1 3
#define MR2 4
#define MRM A1

void setup() {
  pinMode(ML1, OUTPUT);
  pinMode(ML2, OUTPUT);
  pinMode(MLM, OUTPUT);
  pinMode(MR1, OUTPUT);
  pinMode(MR2, OUTPUT);
  pinMode(MRM, OUTPUT);
  Serial.begin( 9600 );
}

void loop() {
  Fw(); //モーター前進
  delay(1000);
  Right(); //モーター右回転
  delay(1000);
  Left(); //モーター左回転
  delay(1000);
  Back(); //モーター後退
  delay(1000);
  Stop(); //モーター停止
  delay(1000);
}

void Fw() { //モーター前進
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, HIGH);
  analogWrite(MLM, 255);
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);
  analogWrite(MRM, 255);
}

void Right() { //モーター右回転
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, HIGH);
  analogWrite(MLM, 255);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, HIGH);
  analogWrite(MRM, 255);
}

void Left() { //モーター左回転
  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);
  analogWrite(MLM, 255);
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);
  analogWrite(MRM, 255);
}

void Back() { //モーター後退
  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);
  analogWrite(MLM, 255);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, HIGH);
  analogWrite(MRM, 255);
}

void Stop() { //モーター停止
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, LOW);
  analogWrite(MLM, 0);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, LOW);
  analogWrite(MRM, 0);
}
