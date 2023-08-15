#include <Stepper.h>

const int STEPS_PER_REVOLUTION = 400;
const int LED_ON_DELAY = 500;
const int LED_OFF_DELAY = 2500;
const int STEPPER_DELAY = 2500;

Stepper myStepper(STEPS_PER_REVOLUTION, 8, 9, 10, 11);

void setup() {
  myStepper.setSpeed(10);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(LED_ON_DELAY);
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(LED_OFF_DELAY);

  myStepper.step(STEPS_PER_REVOLUTION);
  delay(STEPPER_DELAY);

  myStepper.step(-STEPS_PER_REVOLUTION);
  delay(STEPPER_DELAY);
}
