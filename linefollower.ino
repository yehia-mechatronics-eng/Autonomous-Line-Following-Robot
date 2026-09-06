

#define SL 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define SR 5
#define sensorL 4 
#define sensorR 3
char car;
void setup() {
Serial.begin(9600);
for (int i=5 ; i<=10 ; i++){
  pinMode(i,1);
}
pinMode(4,0);
pinMode(3,0);

}

void forward(){
  analogWrite(SL, 100);
  digitalWrite(IN1 , 1);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 1);
  digitalWrite(IN4 , 0);  
  analogWrite(SR, 110);
}

void backward(){
  analogWrite(SL, 100);
  digitalWrite(IN1 , 0);
  digitalWrite(IN2 , 1);
  digitalWrite(IN3 , 0);
  digitalWrite(IN4 , 1);  
  analogWrite(SR, 110);
}

void right(){
  analogWrite(SL, 100);
  digitalWrite(IN1 , 1);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 0);
  digitalWrite(IN4 , 0);  
  analogWrite(SR, 0);
}

void left(){
  analogWrite(SL, 0);
  digitalWrite(IN1 , 0);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 1);
  digitalWrite(IN4 , 0);  
  analogWrite(SR, 110);
}

void stopp(){
  analogWrite(SL, 0);
  digitalWrite(IN1 , 0);
  digitalWrite(IN2 , 0);
  digitalWrite(IN3 , 0);
  digitalWrite(IN4 , 0);  
  analogWrite(SR, 0);
}





void loop() {
  
 int sL = digitalRead(sensorL);
 int sR = digitalRead(sensorR);
  if(sL==0 && sR==0){
    forward();
  }

  else if(sL==0 && sR==1){
    right();
  }

  else if(sL==1 && sR==0){
    left();
  }

  else if(sL==1 && sR==1){
    stopp();
  }


}