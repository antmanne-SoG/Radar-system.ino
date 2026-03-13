int relayPin=7;
void setup() {
  // put your setup code here, to run once:
pinMode(relayPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relayPin,HIGH);
delay(10000);
digitalWrite(relayPin,0);
delay(5000);
}
