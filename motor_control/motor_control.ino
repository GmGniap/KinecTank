int RPWM_MOTOR1 = 3; //CLOCKWISE SPIN
int LPWM_MOTOR1 = 4; //COUNTERCLOCKWISE SPIN


int RPWM_MOTOR2 = 5; //CLOCKWISE SPIN
int LPWM_MOTOR2 = 6; //COUNTERCLOCKWISE SPIN

void setup() {
  // put your setup code here, to run once:
  pinMode(RPWM_MOTOR1,OUTPUT);
  pinMode(LPWM_MOTOR1,OUTPUT);
  pinMode(RPWM_MOTOR2,OUTPUT);
  pinMode(LPWM_MOTOR2,OUTPUT);
  
}

void move(){
	// TODO PID motor control
}

void loop() {

  delay(500);
  analogWrite(RPWM_MOTOR1,0);
  analogWrite(LPWM_MOTOR1,0);
  analogWrite(RPWM_MOTOR2,0);
  analogWrite(LPWM_MOTOR2,0);
  
  
  for(int i=100; i< 256 ; i++){
    analogWrite(RPWM_MOTOR1,i);
    analogWrite(RPWM_MOTOR2,i);
    delay(50);
  }

  delay(500);

  analogWrite(RPWM_MOTOR1,0);
  analogWrite(LPWM_MOTOR1,0);
  analogWrite(RPWM_MOTOR2,0);
  analogWrite(LPWM_MOTOR2,0);
  
  for(int i=100; i< 256 ; i++){
    analogWrite(LPWM_MOTOR1,i);
    analogWrite(LPWM_MOTOR2,i);
    delay(50);
  }

  delay(500);

  analogWrite(RPWM_MOTOR1,0);
  analogWrite(LPWM_MOTOR1,0);
  analogWrite(RPWM_MOTOR2,0);
  analogWrite(LPWM_MOTOR2,0);
  
  for(int i=100; i< 256 ; i++){
    analogWrite(LPWM_MOTOR1,i);
    analogWrite(RPWM_MOTOR2,i);
    delay(50);
  }

  delay(500);

  analogWrite(RPWM_MOTOR1,0);
  analogWrite(LPWM_MOTOR1,0);
  analogWrite(RPWM_MOTOR2,0);
  analogWrite(LPWM_MOTOR2,0);

  for(int i=100; i< 256 ; i++){
    analogWrite(RPWM_MOTOR1,i);
    analogWrite(LPWM_MOTOR2,i);
    delay(50);
  }
}
