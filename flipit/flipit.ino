const int joystickpin=0;
const int act1pin=2;
const int act2pin=5;
const int tol=300;

const int extended=5/5*255;
const int retracted=0/5*255;


void setup() {
  // put your setup code here, to run once:

  pinMode(joystickpin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int joystickvalue=analogRead(joystickpin);

  if (joystickvalue>512+tol){
      analogWrite(act1pin,extended);
      analogWrite(act2pin,extended);
  }
  else if (joystickvalue<512-tol){
      analogWrite(act1pin,retracted);
      analogWrite(act2pin,retracted);      
  }

  delay(100);

}
