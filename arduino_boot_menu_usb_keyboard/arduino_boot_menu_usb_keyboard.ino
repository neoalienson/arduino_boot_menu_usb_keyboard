#include <Keyboard.h>


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);

  Keyboard.begin();
//  Serial.begin(9600);
}

void loop() {
  delay(100);

  if (digitalRead(2) == LOW) {
    Keyboard.write(KEY_F12);
  }
  if (digitalRead(3) == LOW) {
    Keyboard.write(KEY_UP_ARROW);
  }
  if (digitalRead(4) == LOW) {
    Keyboard.write(KEY_DOWN_ARROW);
  }
  if (digitalRead(5) == LOW) {
    Keyboard.write(KEY_RETURN);
  }
}
