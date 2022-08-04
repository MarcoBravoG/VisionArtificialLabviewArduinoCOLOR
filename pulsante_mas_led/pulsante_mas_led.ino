#include <Wire.h> 
#include <Servo.h>
Servo servoMotor;

Servo servoMotor2;

// Práctica encender y apagar un LED a través de botón pulsador
const int LED=13;
const int BOTON=7;
const int BOTON2=6;

int val;
int val2;

void setup(){
  servoMotor.attach(9);
  servoMotor2.attach(10
  );
  servoMotor.write(0);
  pinMode(LED,OUTPUT);
  pinMode(BOTON,INPUT);
  pinMode(BOTON2,INPUT);
  
}
void loop(){
  val=digitalRead(BOTON);
  val2=digitalRead(BOTON2);
  
  if  (val==HIGH){
     digitalWrite(LED,HIGH);
     servoMotor.write(85); 
    }
    else 
    { 
      digitalWrite(LED,LOW);
      servoMotor.write(0);
     }

     ////////////////////////
       if  (val2==HIGH){
     servoMotor2.write(75); 
    }
    else 
    { 
      servoMotor2.write(0);
     }

     
}
