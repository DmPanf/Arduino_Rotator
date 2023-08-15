#include <Servo.h>

Servo servo;
Servo servo1;

void setup() {
    servo.attach(10);
    servo1.attach(8);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    // Включить и выключить встроенный светодиод
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

    // Значения для сервоприводов
    int servoValues[] = {50, 60, 50, 60, 50, 60, 50, 60, 50, 60, 50, 60, 50, 60, 50, 60, 50, 60, 50};
    int servo1Values[] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90};

    for (int i = 0; i < 19; i++) {
        servo.write(servoValues[i]);
        servo1.write(servo1Values[i]);
        
        if (i == 0) {
            delay(15000);
        } else {
            delay(500);
        }
    }
}
