

const int buttonPin = 2;
const int ledPin =  3;
int Buzzer1 = 9;

int buttonState = 0;  

void setup() {
  Serial.begin(9600);
 
  pinMode(Buzzer1, OUTPUT);  

  pinMode(buttonPin, INPUT);
  
  pinMode(ledPin, OUTPUT);
}

void loop(){

  buttonState = digitalRead(buttonPin);


  if (buttonState == HIGH) {   
  digitalWrite(ledPin, HIGH);
 
  // play th Music
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,450,225);
      delay(300);
      tone(Buzzer1,450,225);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,450,200);
      delay(300);
      tone(Buzzer1,600,300);
      delay(300);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,700,300);
      delay(300);
      tone(Buzzer1,700,300);
      delay(500);
      tone(Buzzer1,600,300);
      delay(300);
      tone(Buzzer1,400,200);
      delay(1000);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,650,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,650,200);
      delay(300);
      tone(Buzzer1,650,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(1000);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,600,300);
      delay(500);
      tone(Buzzer1,600,300);
      delay(500);
      tone(Buzzer1,800,300);
      delay(500);
      tone(Buzzer1,800,300);
      delay(500);
      tone(Buzzer1,400,200);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);  
 
    
  } 
}
