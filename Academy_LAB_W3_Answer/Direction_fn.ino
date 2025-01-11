void motorsetup() {
  pinMode(MR_IN1, OUTPUT);
  pinMode(MR_IN2, OUTPUT);
  pinMode(MR_IN3, OUTPUT);
  pinMode(MR_IN4, OUTPUT);
  pinMode(ML_IN1, OUTPUT);
  pinMode(ML_IN2, OUTPUT);
  pinMode(ML_IN3, OUTPUT);
  pinMode(ML_IN4, OUTPUT);
  pinMode(L_ENA, OUTPUT);
  pinMode(L_ENB, OUTPUT);
  pinMode(R_ENA, OUTPUT);
  pinMode(R_ENB, OUTPUT);
  stop(500);

}
void forward(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

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
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  delay(d);
}

void turn_right(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  delay(d);
}

void turn_left(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  delay(d);
}

void slide_left(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  delay(d);
}

void slide_right(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  delay(d);
}

void slide_left_forward(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, HIGH);  //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN3, HIGH);  //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  delay(d);
}

void slide_right_forward(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, HIGH);  //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  digitalWrite(ML_IN1, HIGH);  //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  delay(d);
}

void slide_left_backward(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, HIGH);  //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, LOW);   //motor2
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, LOW);   //motor3
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, HIGH);  //motor4
  delay(d);
}

void slide_right_backward(int d) {
  analogWrite(R_ENA, SpeedM1);
  analogWrite(R_ENB, SpeedM2);
  analogWrite(L_ENB, SpeedM3);
  analogWrite(L_ENA, SpeedM4);

  digitalWrite(MR_IN1, LOW);   //motor1
  digitalWrite(MR_IN2, LOW);   //motor1
  digitalWrite(MR_IN3, LOW);   //motor2
  digitalWrite(MR_IN4, HIGH);  //motor2
  digitalWrite(ML_IN3, LOW);   //motor3
  digitalWrite(ML_IN4, HIGH);  //motor3
  digitalWrite(ML_IN1, LOW);   //motor4
  digitalWrite(ML_IN2, LOW);   //motor4
  delay(d);
}

void stop(int d) {
  digitalWrite(MR_IN1, LOW);  //motor1
  digitalWrite(MR_IN2, LOW);  //motor1
  digitalWrite(MR_IN3, LOW);  //motor2
  digitalWrite(MR_IN4, LOW);  //motor2
  digitalWrite(ML_IN3, LOW);  //motor3
  digitalWrite(ML_IN4, LOW);  //motor3
  digitalWrite(ML_IN1, LOW);  //motor4
  digitalWrite(ML_IN2, LOW);  //motor4
  delay(d);
}
