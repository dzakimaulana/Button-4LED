#include <Arduino.h>

#define LED_PIN0 D5
#define LED_PIN1 D6
#define LED_PIN2 D7
#define LED_PIN3 D8

#define BTN_PIN D2

const int led_pins[] = { LED_PIN0, LED_PIN1, LED_PIN2, LED_PIN3 };
int count = 0;
bool forward = true;
bool isPrime(int number);

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(led_pins[i], OUTPUT);
  }
  pinMode(BTN_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  caseThree();
}
