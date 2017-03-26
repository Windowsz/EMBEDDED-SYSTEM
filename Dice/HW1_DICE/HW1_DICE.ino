int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int switchs = 9;
int buttonState = 0;
long randomnum;

void setup() {
 // Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(switchs, INPUT);
  randomSeed(analogRead(0));
}
void one(){
  digitalWrite(LED4, HIGH);
  }
void two(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED7, HIGH);
  }

void three(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED7, HIGH);
  }

void four(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED7, HIGH);
  }

void five(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED7, HIGH);
  }

void six(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  }
void clearz(){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
}

void loop() {
  buttonState = digitalRead(switchs);
  if(buttonState == LOW){
   randomnum = random(1,7);
    if(randomnum == 1){
      one();
    }
    if(randomnum == 2){
      two();
    }
    if(randomnum == 3){
      three();
    }
    if(randomnum == 4){
      four();
    }
    if(randomnum == 5){
      five();
    }
    if(randomnum == 6){
      six();
    }
    else
    {
      clearz();
    }
    delay(2000);
  }
}
