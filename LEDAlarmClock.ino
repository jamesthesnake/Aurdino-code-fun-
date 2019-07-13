 

//  Tutorial 7: 7 Segment LED
//
// Define the LED digit patters, from 0 – 9
// Note that these patterns are for common anode displays
// 0 = LED on, 1 = LED off:
//                                     Digital pin: 2,3,4,5,6,7,8
//                                                          a,b,c,d,e,f,g

byte seven_seg_digits[10][7] = { { 0,0,0,0,0,0,1 },  // = 0
                               { 1,0,0,1,1,1,1 },  // = 1
                                                          { 0,0,1,0,0,1,0 },  // = 2
                                                          { 0,0,0,0,1,1,0 },  // = 3
                                                          { 1,0,0,1,1,0,0 },  // = 4
                                                          { 0,1,0,0,1,0,0 },  // = 5
                                                          { 0,1,0,0,0,0,0 },  // = 6
                                                          { 0,0,0,1,1,1,1 },  // = 7
                                                          { 0,0,0,0,0,0,0 },  // = 8
                                                          { 0,0,0,1,1,0,0 }   // = 9
                                                          };

void setup() {              
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void sevenSegWrite(byte digit) {

  byte pin = 2;
  for (byte segCount = 0; segCount < 7; ++segCount) {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
}

 

void loop() {

  for (byte count = 10; count > 0; --count) {
   delay(1000);
   sevenSegWrite(count - 1);
  }

  delay(3000);
}
