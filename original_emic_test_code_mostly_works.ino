
int count = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(2400);
pinMode(7, INPUT);
delay(5000);
Serial.print("say=hello world;");
Serial.print("\r");

while (digitalRead(7)==1) {
  //wait
  delay(100);
}

Serial.print("say=This is the next line;");
Serial.print("\r");
while (digitalRead(7)==1) {
  delay(100);
}
}

void loop() {
  // put your main code here, to run repeatedly:
count = count + 1;
Serial.print("say=Loop Count ");
//Serial.print("\r");
//while (digitalRead(7)>0) {
//  delay(100);
//}
//Serial.print("say=");
Serial.print(String(count));
Serial.print(";");
Serial.print("\r");
while(digitalRead(7)==1) {
  delay(100);
}
delay(1000);
}
