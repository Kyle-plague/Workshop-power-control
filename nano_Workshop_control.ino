

const int Switch1 = 14;
const int Switch2 = 15;
const int Switch3 = 16;
const int relay1 = 17;
const int relay2 = 18;
const int relay3 = 19;
void setup() {
  // put your setup code here, to run once:
   pinMode(relay1,OUTPUT);
   pinMode(relay2,OUTPUT);
   pinMode(relay3,OUTPUT);
   pinMode(Switch1,INPUT_PULLUP);
   pinmode(Switch2,INPUT_PULLUP);
   pinmode(Switch3,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
   int switch1State = digitalRead(Switch1);
   int switch2State = digitalRead(Switch2);
   int switch3State = digitalRead(Switch3);

     if (switch1State == LOW) {
    digitalWrite(relay1, HIGH);
  } else {
    // If released (HIGH), turn off the LED
    digitalWrite(relay1, LOW);
  }


  if (switch2State == LOW) {
    digitalWrite(relay2, HIGH);
  } else {
    // If released (HIGH), turn off the LED
    digitalWrite(relay2, LOW);
  }


  if (switch3State == LOW) {
    digitalWrite(relay3, HIGH);
  } else {
    // If released (HIGH), turn off the LED
    digitalWrite(relay3, LOW);
  }

}
