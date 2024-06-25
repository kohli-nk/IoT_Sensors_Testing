const int led = 27;
const int s = 2;
int sensor;
const int thres = 1500;
#include<ESP32Servo.h>
Servo s1;

void setup() {
  s1.attach(27);
  s1.write(0);
  pinMode(s,INPUT);
}

void loop() {
  sensor = analogRead(s);
  if(sensor<thres){
    s1.write(0);
  }
  else{
    delay(2000);
    s1.write(160);
    delay(500);                                                                             
    s1.write(0);
    delay(4000);
  }
}
