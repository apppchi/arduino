void setup() {
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);
pinMode (7, OUTPUT);
pinMode (8, OUTPUT);
pinMode (9, OUTPUT);
pinMode (10, OUTPUT);
pinMode (11, OUTPUT);
Serial.begin(9600);
}
//void loop() {
//  if (Serial.available() > 0) {
//    int data = Serial.parseInt();
//    int b = 1;
//    int c = 0;
//    while (data > 0) {
//        c = c + b * (data % 2);
//        b = b * 10;
//        data = data / 2;
//    }
//    int d = 0;
//    int e = 2;
//    while (c > 0) {
//      digitalWrite(e, LOW);
//        d = c % 10;
//        if (d == 1){
//      digitalWrite(e, HIGH);
//      }
//      c = c / 10;
//      e++;
//    }
//  }
//}

void loop(){
  int a = Serial.parseInt();
  if(a > 0 && a <= 1023){
    for(int i = 2; i <= 11; ++i){
      digitalWrite(i, 0);  
    }
    int c = 2;
    while(a){
      digitalWrite(c, a%2);
      a /= 2;
      c++;
    }
  }
}
