#include <Servo.h>

Servo servo;  // Crear una instancia de la clase Servo
int anguloInicial = 90;  // Ángulo inicial del servo
int anguloSecundario = 80;  // Ángulo secundario del servo

void setup() {
  servo.attach(6);  // Asocia el servo al pin 9 (ajusta según tu configuración)
  servo.write(anguloInicial);  // Mueve el servo a la posición inicial
}

void loop() {
  // Mueve el servo a la posición secundaria
  servo.write(anguloSecundario);
  delay(3000);  // Espera 1 segundo
}
