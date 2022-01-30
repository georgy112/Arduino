// Указываем, что будем отправлять данные на 13 диджитал порт ардуины
void setup() {
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
}

// Мигать поочередно свтодиодами 
//void loop() {
//    digitalWrite (9, HIGH);
//    delay (100);
//    digitalWrite (9, LOW);
//    delay (100);
//    digitalWrite (8, HIGH);
//    delay (100);
//    digitalWrite (8, LOW);
//    delay (100);
//}

// Мигать вместе свтодиодами 
//void loop() {
//    digitalWrite (9, HIGH);
//    digitalWrite (8, HIGH);
//    delay (100);
//    digitalWrite (9, LOW);
//    digitalWrite (8, LOW);
//    delay (100);
//}

// Светить всеми свтодиодами 
void loop() {
    digitalWrite (9, HIGH);
    digitalWrite (8, HIGH);
    digitalWrite (9, LOW);
    digitalWrite (8, LOW);
}
