#define led 13
#define pul 7
int pulsante = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(pul, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
pulsante = digitalRead(pul);
if(pulsante == HIGH){
  digitalWrite(led, HIGH);
}
else {
  digitalWrite(led, LOW);
}
}
