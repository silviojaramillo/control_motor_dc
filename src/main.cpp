#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    int val = map(analogRead(A0),0,1023,0,255);
    //Serial.println(val);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    analogWrite(4,val);
    Serial.println(val);
  }