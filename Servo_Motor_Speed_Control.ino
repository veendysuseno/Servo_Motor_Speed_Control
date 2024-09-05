#include <Servo.h>
Servo servo1;
int val;
void setup() {
  servo1.attach(2);
}

void loop() {
  val = analogRead(0);
  val = map(val, 0, 1023, 0, 179);
  servo1.write(val);
  delay(15);
}
