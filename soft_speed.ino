//const int pwmPin = 9; // Pin PWM yang digunakan
//int motorSpeed = 0; // Kecepatan motor (0 - 255)
//
//void setup() {
//  // Inisialisasi pin PWM
//  pinMode(pwmPin, OUTPUT);
//}
//
//void loop() {
//  // Soft start: tingkat kecepatan motor meningkat secara bertahap
//  for (motorSpeed = 0; motorSpeed <= 255; motorSpeed++) {
//    analogWrite(pwmPin, motorSpeed);
//    delay(10); // Delay untuk efek soft start
//  }
//  
//  // Di sini bisa ditambahkan logika lain sesuai kebutuhan
//  
//  delay(1000); // Delay sementara
//  
//  // Contoh: Mematikan motor
//  analogWrite(pwmPin, 0);
//}
