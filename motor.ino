//left motor or wheel
#define IN1 6 //in1 at pin D6
#define IN2 9 //in2 at pin D9

//right motor or wheel
#define IN3 10 //in3 at pin D10
#define IN4 11 //in4 at pin D11

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);   //here we tell the Arduino IN1 is an OUTPUT pin
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //moves wheel 1 forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  //moves wheel 2 forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  delay(5000); //this tells the arduino to wait for 5000 milliseconds or 5 seconds

  //stops wheel 1
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  //stops wheel 2
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  delay(5000);

  //moves wheel 1 backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  //moves wheel 2 backward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  delay(5000);

  
  // now we want to turn, make one wheel go forward and the other backward to turn. Example:
  
  //moves wheel 1 forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  //moves wheel 2 backward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  delay(5000);

  //moves wheel 1 backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  //moves wheel 2 forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  delay(5000);

  //this is the end of the program
}
