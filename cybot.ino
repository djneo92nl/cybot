#define RHforwards 2      // RH motor forward  pin 1 on the hBridge
#define LHforwards 3      // LH motor forward  pin 3 on the hBridge
#define RHbackwards 4     // RH motor Backward pin 2 on the hBridge
#define LHbackwards 5     // LH motor backward pin 4 on the hBridge
#define ledPin 13         // ledPin is used for indicating active motors

void setup(){
  // initialize the pins as outputs:
  pinMode(RHforwards, OUTPUT);
  pinMode(LHforwards, OUTPUT);
  pinMode(RHbackwards, OUTPUT);
  pinMode(LHbackwards, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  setStop();
  setForwards();
  delay(400);
  setStop();
  delay(10000);
}

void setStop(){
   digitalWrite(13, LOW);
   digitalWrite(RHforwards, LOW);
   digitalWrite(LHforwards, LOW);
   digitalWrite(RHbackwards, LOW);
   digitalWrite(LHbackwards, LOW);
}

void setForwards(){
  digitalWrite(13, HIGH);
  digitalWrite(RHforwards, HIGH);
  digitalWrite(LHforwards, HIGH);
  digitalWrite(RHbackwards, LOW);
  digitalWrite(LHbackwards, LOW);
}

void setBackwards(){
  digitalWrite(13, HIGH);
  digitalWrite(RHforwards, LOW);
  digitalWrite(LHforwards, LOW);
  digitalWrite(RHbackwards, HIGH);
  digitalWrite(LHbackwards, HIGH);
}

void setLeft(){
  digitalWrite(13, HIGH);
  digitalWrite(RHforwards, HIGH);
  digitalWrite(LHforwards, LOW);
  digitalWrite(RHbackwards, LOW);
  digitalWrite(LHbackwards, HIGH);
}

void setRight(){
  digitalWrite(13, HIGH);
  digitalWrite(RHforwards, LOW);
  digitalWrite(LHforwards, HIGH);
  digitalWrite(RHbackwards, HIGH);
  digitalWrite(LHbackwards, LOW);
}
