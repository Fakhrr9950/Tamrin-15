 #define BUZZER_PIN 6
 #define BTN_PIN 7
 void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN,OUTPUT);
  pinMode(BTN_PIN,INPUT_PULLUP);

}

void loop() {
  if(digitalRead(BTN_PIN))
  {
    analogWrite(BUZZER_PIN, 255);
  }
  else
  {
    analogWrite(BUZZER_PIN, 127);
  }
  // put your main code here, to run repeatedly:

}
