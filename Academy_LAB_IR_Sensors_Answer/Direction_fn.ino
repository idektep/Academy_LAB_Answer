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

uint8_t SpeedM1 = 220;  //Adjust speed  //motor1
uint8_t SpeedM2 = 220;  //Adjust speed //motor2
uint8_t SpeedM3 = 220;  //Adjust speed //motor3
uint8_t SpeedM4 = 220;  //Adjust speed //motor4

void motorsetup() {
  pinMode(MR_IN1, OUTPUT);
  pinMode(MR_IN2, OUTPUT);
  pinMode(MR_IN3, OUTPUT);
  pinMode(MR_IN4, OUTPUT);
  pinMode(ML_IN1, OUTPUT);
  pinMode(ML_IN2, OUTPUT);
  pinMode(ML_IN3, OUTPUT);
  pinMode(ML_IN4, OUTPUT);
  pinMode(M4_ENA, OUTPUT);
  pinMode(M3_ENB, OUTPUT);
  pinMode(M1_ENA, OUTPUT);
  pinMode(M2_ENB, OUTPUT);
  stop(100);
}
void forward(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  delay(d);
}

void backward(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  delay(d);
}

void turn_right(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  delay(d);
}

void turn_left(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  delay(d);
}

void slide_left(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  delay(d);
}

void slide_right(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  delay(d);
}

void slide_left_forward(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  delay(d);
}

void slide_right_forward(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  delay(d);
}

void slide_left_backward(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  delay(d);
}

void slide_right_backward(int d) {
  analogWrite(M1_ENA, SpeedM1); //Pin speed motor1
  analogWrite(M2_ENB, SpeedM2); //Pin speed motor2
  analogWrite(M3_ENB, SpeedM3); //Pin speed motor3
  analogWrite(M4_ENA, SpeedM4); //Pin speed motor4

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  delay(d);
}

void stop(int d) {
  digitalWrite(MR_IN1, LOW);  //motor1
  digitalWrite(MR_IN2, LOW);  //motor1
  digitalWrite(MR_IN3, LOW);  //motor2
  digitalWrite(MR_IN4, LOW);  //motor2
  digitalWrite(ML_IN1, LOW);  //motor4
  digitalWrite(ML_IN2, LOW);  //motor4
  digitalWrite(ML_IN3, LOW);  //motor3
  digitalWrite(ML_IN4, LOW);  //motor3
  delay(d);
}
