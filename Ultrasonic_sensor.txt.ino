int trig = 33;
int echo = 32;
int l1 = 5;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo , INPUT);
  pinMode(l1, OUTPUT);

}

void loop() {
  digitalWrite(trig , LOW);
  delay(2);
  digitalWrite(trig , HIGH);
  delay(10);
  digitalWrite(trig , LOW);

  int duration = pulseIn(echo , HIGH);
  int distance = duration*0.034/2;

  if (distance <15){
    digitalWrite(l1,HIGH);

  } else {
    digitalWrite(l1,LOW);
  }

}
