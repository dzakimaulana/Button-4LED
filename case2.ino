void caseTwo() {
  if (digitalRead(BTN_PIN) == HIGH) {
    String binNum = String(count, BIN); // Convert count to binary string
    while (binNum.length() < 4) {
      binNum = "0" + binNum; // Add leading zeros if needed
    }
    if (count >= 15) {
      forward = false;
    } else if (count <= 0) {
      forward = true;
    }
    
    Serial.print("Counter - ");
    Serial.println(count);

    for (int i = 0; i < binNum.length(); i++) {
      if (binNum.charAt(i) == '0') {
        digitalWrite(led_pins[i], LOW);
      } else {
        digitalWrite(led_pins[i], HIGH);
      }
    }
    if (forward) {
      count ++;
    } else {
      count--;
    }
    while (digitalRead(BTN_PIN) == HIGH) {
      delay(500);
    }
  }
}