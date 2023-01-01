
/* ------------ 4 BITS COUNTER ------------ */

short bit_0 = 2;
short bit_1 = 3;
short bit_2 = 4;
short bit_3 = 5;
short time_delay = 1000; //Delay between each nibble

void setup() {
  // put your setup code here, to run once:
  pinMode(bit_0, OUTPUT);
  pinMode(bit_1, OUTPUT);
  pinMode(bit_2, OUTPUT);
  pinMode(bit_3, OUTPUT);
}



void loop() {
  // put your main code here, to run repeatedly:
  // 0
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 1
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 2
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 3
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 4
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 5
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 6
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 7
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, LOW);
  delay(time_delay);
  // 8
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, HIGH);
  delay(time_delay);
  // 9
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, HIGH);
  delay(time_delay);
  // 10
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, HIGH);
  delay(time_delay);
  // 11
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, LOW);
  digitalWrite(bit_3, HIGH);
  delay(time_delay);
  // 12
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, HIGH);
  delay(time_delay);
  // 13
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, LOW);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, HIGH);
  delay(time_delay);
  // 14
  digitalWrite(bit_0, LOW);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, HIGH);
  delay(time_delay);
  // 15
  digitalWrite(bit_0, HIGH);
  digitalWrite(bit_1, HIGH);
  digitalWrite(bit_2, HIGH);
  digitalWrite(bit_3, HIGH);
  delay(2000);




}
