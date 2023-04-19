#include <Servo.h>

// Create a Servo object to control the microservo
Servo myservo;

// Create a variable to store the pushbutton state
int buttonState = 0;
int prevState = 0;

void setup() {
  // Attach the microservo to pin 9
  myservo.attach(9);

  // Set up the pushbutton on pin 2
  pinMode(2, INPUT);
}

void loop() {
  // Read the state of the pushbutton
  buttonState = digitalRead(2);

  // If the pushbutton is pressed, move the servo 180 degrees clockwise
  if (buttonState == HIGH && prevState == 0) {
    myservo.write(180);
    delay(1000);
  } else if (buttonState == HIGH && prevState == 1) {
    myservo.write(0);
    delay(1000);
  }
}
