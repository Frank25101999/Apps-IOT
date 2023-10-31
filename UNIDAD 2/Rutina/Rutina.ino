#include <Servo.h>

Servo servoBase;
Servo servoBrazo;
Servo servoCodo;
Servo servoex1;
Servo servoex2;
Servo servomnc;
bool cicloCompleto = false; // Variable para seguir el estado del ciclo

void setup() {
  servoBase.attach(1);  // Conecta el servo de la base al pin 9
  servoBrazo.attach(2); // Conecta el servo del brazo al pin 10
  servoCodo.attach(3);  // Conecta el servo del codo al pin 11
  servoex1.attach(4);  // Conecta el servo de la base al pin 9
  servoex2.attach(5); // Conecta el servo del brazo al pin 10
  servomnc.attach(6);  // Conecta el servo del codo al pin 11
}

void loop() {
  // Posición inicial
  servoBase.write(0);
  servoBrazo.write(180);
  servoCodo.write(90);
  servoex1.write(125);
  servoex2.write(0);
  servomnc.write(90);
  delay(1000); // Espera 1 segundo

  if (!cicloCompleto) { // Verifica si el ciclo no ha sido completado
  // Mover el servo de la base a 90 grados
  servoBase.write(90);
  delay(3000); // Espera 5 segundo

  // Mover el servo del brazo a 160 grados
  servoBrazo.write(160);
  delay(5000); // Espera 5 segundo

  // Mover el servo del codo a 120 grados
  servoCodo.write(100);
  delay(3000); // Espera 5 segundo
  

  // Mover el servo de la ex1 a 90 grados
  servoex1.write(45);
  delay(3000); // Espera 5 segundo

  // Mover el servo de la ex2 a 60 grados
  servoex2.write(60);
  delay(3000); // Espera 5 segundo

  // Mover el servo de la mnc a 120 grados
  servomnc.write(120);
  delay(3000); // Espera 5 segundo
  
  // Volver el mnc a 90 grados
  servomnc.write(90);
  delay(3000); // Espera 5 segundo

  // Volver el brazo a 0 grados
  servoex2.write(0);
  delay(3000); // Espera 5 segundo

  // Volver la base a 125 grados
  servoex1.write(125);
  delay(3000); // Espera 5 segundo

 // Volver el codo a 90 grados
  servoCodo.write(90);
  delay(3000); // Espera 5 segundo

  // Volver el brazo a 180 grados
  servoBrazo.write(180);
  delay(3000); // Espera 5 segundo

  // Volver la base a 0 grados
  servoBase.write(0);
  delay(3000); // Espera 5 segundo

  cicloCompleto = true; // Marca el ciclo como completado
  }
 
}
