/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/WindyCity_IOT/Labs/Lab2/src/Lab2.ino"
/*
 * Project Lab2
 * Description: Playing with a potentiometer
 * Author: Arnav Sangamnerkar
 * Date: 06/29/2021
 */
void setup();
void loop();
#line 7 "d:/WindyCity_IOT/Labs/Lab2/src/Lab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value;  

void setup() {
  // initlaize pins
  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
  Serial.begin(9600);
  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // read knob value and print to serial monitor
  uint16_t value;  
  value = analogRead(A5); 
  Serial.println(value);

  //turn light on/off with delay influenced by knob value
  digitalWrite(D5, HIGH);
  delay((value*value)/200);
  digitalWrite(D5, LOW);
  delay((value*value)/200);
}