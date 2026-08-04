#include <Arduino.h>

int water_pump = 2;
int cap_soil_sen = 0;

void  setup()  {
  Serial.begin(9600);
  pinMode(water_pump, OUTPUT);
}

void loop() {
  int val;
  val = analogRead(cap_soil_sen);
  Serial.println(val);
  if(val < 400)
  {
    digitalWrite(water_pump, HIGH);
  }
  else
  {
    digitalWrite(water_pump, LOW);
  }
}