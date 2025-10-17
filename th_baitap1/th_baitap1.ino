const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
const int numLeds = 10; // Tổng số đèn LED

void setup() {

  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
 // Lặp qua từng đèn LED để tạo số và điều khiển
  for (int i = 0; i < numLeds; i++) {
    // Tạo một số ngẫu nhiên trong khoảng từ 0 đến 100
    int randomNumber = random(0, 10);

    // Kiểm tra xem số ngẫu nhiên là chẵn hay lẻ
    if (randomNumber % 2 != 0) {
      // Nếu là số lẻ, bật đèn LED
      digitalWrite(ledPins[i], HIGH);
    } else {
      // Nếu là số chẵn, tắt đèn LED
      digitalWrite(ledPins[i], LOW);
    }
  }

  // Đợi 3 giây trước khi bắt đầu một lượt random mới
  delay(3000);
}
