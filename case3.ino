void caseThree() {
  if (digitalRead(BTN_PIN) == HIGH) {
        if (count > 25) {
            count = 0;
        }

        if (check_prime(count) == true){
            Serial.print(count);
            Serial.println(" - Prime");
            blink_led();
        } else {
          Serial.println(count);
        }

        count++;
        while(digitalRead(BTN_PIN) == HIGH);
    }
}

bool check_prime (int number) {
    bool prime = true;

    if (number == 0 || number == 1)
        return false;
    else {
        for (int x=2;x < ((number/2) + 1);x++) {
            if ((number % x) == 0)
                prime = false;
        }
    }

    return prime;
}

void blink_led (void) {
    for (int x=0;x<5;x++) {
        digitalWrite(led_pins[0], HIGH);
        delay(150);
        digitalWrite(led_pins[0], LOW);
        delay(150);
    }
}