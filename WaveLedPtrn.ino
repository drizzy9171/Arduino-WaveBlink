const int led1 = 9;
const int led2 = 7;
const int led3 = 4;
const int led4 = 2;

void setup(){
  // code here
  //Serial.begin(9600);
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop(){
  //code here
  
  myLed(led1);
  myLed(led2);
  myLed(led3);
  myLed(led4);
  
}

void myLed(int pin){
  
  digitalWrite(pin,HIGH);
  delay(100);
  
  digitalWrite(pin,LOW);
  delay(100);
  
}
