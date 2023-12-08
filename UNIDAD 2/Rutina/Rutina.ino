#include <Servo.h>

Servo servo;  // Crear una instancia de la clase Servo
int anguloInicial = 0;  // Ángulo inicial del servo
int anguloSecundario = 10;  // Ángulo secundario del servo
int servoPin = 2;  // Pin GPIO al que está conectado el servo (ajusta según tu configuración)

void setup() {
  servo.attach(servoPin);  // Asocia el servo al pin GPIO configurado
  servo.write(anguloInicial);  // Mueve el servo a la posición inicial
}

void loop() {
  // Mueve el servo a la posición secundaria
  servo.write(anguloSecundario);
  delay(5000);  // Espera 5 segundos
}
