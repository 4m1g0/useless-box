#include <Servo.h> 
 
Servo servo1; 
Servo servo2; 
const int boton1 = 6;
const int boton2 = 7;
 
void setup() 
{ 
  Serial.begin(9600);
  servo1.attach(10); 
  servo2.attach(11);
  pinMode(boton1, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);
} 
 
void loop() 
{ 
  if (digitalRead(boton1) == LOW){
    Serial.println("boton1");
    delay(100);
    servo1.write(90);
    delay(800);
    servo1.write(0);
  }
  
  if (digitalRead(boton2) == LOW){
    Serial.println("boton2");
    delay(100);
    servo2.write(90);
    delay(800);
    servo2.write(0);
  }
  delay(10);
} 

