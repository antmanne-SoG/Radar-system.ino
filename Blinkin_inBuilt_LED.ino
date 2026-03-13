int myled=13
void setup() {
  // put your setup code here, to run once:
pinMode(myled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(myled,1);
delay(500);
digitalWrite(myled,0);
delay(500);


}
