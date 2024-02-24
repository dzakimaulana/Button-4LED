void caseOne() {
    if (digitalRead(BTN_PIN) == HIGH) {
        if (forward) {
            digitalWrite(led_pins[count], HIGH);
            count++;
            if (count > 3) {
            forward = false;
            count = 3;
          }
        } else {
            digitalWrite(led_pins[count], LOW);
            count--;
            if (count < 0) {
            forward = true;
            count = 0;
          }
        }
        // Add a small delay to avoid rapid button presses
        while (digitalRead(BTN_PIN) == HIGH) {
          delay(500);
        }
        
    }
}
