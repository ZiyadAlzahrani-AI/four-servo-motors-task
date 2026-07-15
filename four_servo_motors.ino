// C++ code
//
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(3);

  unsigned long startTime = millis();

  // Sweep for 2 seconds
  while (millis() - startTime < 2000) {
    for (int angle = 0; angle <= 180; angle += 5) {
      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);
      delay(15);

      if (millis() - startTime >= 2000) {
        break;
      }
    }

    for (int angle = 180; angle >= 0; angle -= 5) {
      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);
      delay(15);

      if (millis() - startTime >= 2000) {
        break;
      }
    }
  }

  // Hold all motors at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // Nothing here because the task runs once
}