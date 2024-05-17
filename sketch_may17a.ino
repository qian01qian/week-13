void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  int hahaha = analogRead(A0);
//  Serial.println(hahaha);
//  delay(1);
    int hehe = analogRead(A0);
    int oooo;
    Serial.println(hehe);
    if(hehe <10)hehe = 10;
    if(hehe > 500) hehe = 500;
    oooo = map(hehe, 10, 500, 0, 255);
    analogWrite(9, oooo);
    delay(1);
}
