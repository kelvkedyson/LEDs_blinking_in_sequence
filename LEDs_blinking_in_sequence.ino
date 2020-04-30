// the setup function runs once when you press reset or power the board
//this makes the LED to blink in sequence
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int i;
  for(i = 1; i<=5; i++){
    digitalWrite(i, HIGH);
    if(digitalRead(i) == HIGH){
      digitalWrite(i+1,LOW);
    }
    delay(600);

    if(digitalRead(i) == LOW){
      digitalWrite(i+1, HIGH);
    }
    delay(600);
  }
}
