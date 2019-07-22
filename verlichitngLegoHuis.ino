//all used leds
int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;
int led9 = 9;
int led8 = 8;

void setup() {
  //set the pins on output
  pinMode(led13, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop() {
    digitalWrite(led13, HIGH);
    delay(500);
    digitalWrite(led13, LOW);
    
    digitalWrite(led12, HIGH);
    delay(500);
    digitalWrite(led12, LOW);
    
    digitalWrite(led11, HIGH);
    delay(500);
    digitalWrite(led11, LOW);
    
    digitalWrite(led10, HIGH);
    delay(500);
    digitalWrite(led10, LOW);
    
    digitalWrite(led9, HIGH);
    delay(500);
    digitalWrite(led9, LOW);
    
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led8, LOW);

}
