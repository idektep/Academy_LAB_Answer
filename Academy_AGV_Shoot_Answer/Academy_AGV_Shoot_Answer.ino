#include <Arduino.h>
#define Shoot_Pin 5

//-------------------------------------------------edit Parameter-------------------------------------------------------//
void setup() {
  Serial.begin(115200);
  motorsetup();
  Serial.print("RRSI: ");
  
  pinMode(Shoot_Pin, OUTPUT);
  digitalWrite(Shoot_Pin, 1);


  //----------------Edit sequence code here--------------//
  forward(1000);
  stop(500);
  Shoot(800);
  backward(500);
  turn_left(450);
  forward(1000);
  turn_right(450);
  forward(1000);
  stop(500);
  Shoot(800);
  backward(1000);
  turn_left(450);
  forward(1000);
  turn_right(450);
  forward(1000);
  stop(500);
  Shoot(800);
  backward(1000);
  turn_right(920);
  forward(750);
  stop(100);

}
void loop() {

}
