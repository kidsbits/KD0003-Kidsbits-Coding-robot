/*
kidsbits coding robot kit
Project 6
Motor
http//www.kidsbits.cc
*/
void setup(){
  pinMode(8, OUTPUT);
  pinMode(A1, OUTPUT);
}

void loop(){
//advance
  digitalWrite(8,LOW);    
  digitalWrite(A1,LOW);
  analogWrite(9,200);   
  analogWrite(10,200);    
  delay(3000);
  //move back
  digitalWrite(8,HIGH);  
  digitalWrite(A1,HIGH);
  analogWrite(9,194);
  analogWrite(10,200);
  delay(3000);
//  stop
  digitalWrite(8,HIGH);  
  digitalWrite(A1,HIGH);
  analogWrite(9,0);
  analogWrite(10,0);
  delay(3000);
//turn left
  digitalWrite(8,HIGH);   
  digitalWrite(A1,LOW);
  analogWrite(9,120);
  analogWrite(10,120);
  delay(2000);
  //turn right
  digitalWrite(8,LOW);   
  digitalWrite(A1,HIGH);
  analogWrite(9,120);
  analogWrite(10,120);
  delay(2000);
}
