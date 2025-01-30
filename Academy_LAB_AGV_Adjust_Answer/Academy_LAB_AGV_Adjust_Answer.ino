//-------------------------------------------------Declare variable-------------------------------------------------------//
#define MR_IN1 12 //motor1
#define MR_IN2 13 //motor1
#define MR_IN3 33 //motor2
#define MR_IN4 32 //motor2
#define ML_IN3 25 //motor3
#define ML_IN4 26 //motor3
#define ML_IN1 14 //motor4
#define ML_IN2 27 //motor4

#define M1_ENA 15  //Pin speed motor1
#define M2_ENB 2   //Pin speed motor2
#define M3_ENB 4   //Pin speed motor3
#define M4_ENA 19  //Pin speed motor4

#define L_LED 16  // Left LED
#define R_LED 17  // Right LED

//-----------------------------------------------Adjust range value 120-255-------------------------------------------------------//

uint8_t SpeedM1 = 150;  //Adjust speed //motor1 
uint8_t SpeedM2 = 150;  //Adjust speed //motor2
uint8_t SpeedM3 = 150;  //Adjust speed //motor3
uint8_t SpeedM4 = 150;  //Adjust speed //motor4

//-----------------------------------------------------------------------------------------------------------------------//

//-------------------------------------------------Edit Parameter-------------------------------------------------------//

void setup() {
  Serial.begin(115200);
  motorsetup();
  //---------- LED Pin -----------------//
  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);

//----------------Edit sequence code here--------------//
  digitalWrite(L_LED, HIGH);
  digitalWrite(R_LED, HIGH);
  delay(1000);

  forward(1000);
  backward(1000);
  turn_right(1000);
  turn_left(1000);
  slide_left(1000);
  slide_right(1000);
  slide_left_forward(1000);
  slide_right_forward(1000);
  slide_left_backward(1000);
  slide_right_backward(1000);
  stop(500);
  
}
void loop() {
 
  
}



