#include <Wire.h> 
#include <Servo.h>

// Declaramos la variable para controlar el servo
Servo servoMotor;

const int ledPIN = 8;



void setup() {


    // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
  servoMotor.write(0);

   pinMode(ledPIN , OUTPUT);  //definir pin como salida
   digitalWrite(ledPIN , HIGH);    // poner el Pin en LOW
   delay(100);   
      digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
   delay(100);   
   digitalWrite(ledPIN , HIGH);    // poner el Pin en LOW
   delay(1000);   
      digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
    
   
}

void loop() {


delay(5000);
    servoMotor.write(75);    
delay(2000);
    servoMotor.write(0);  

}
