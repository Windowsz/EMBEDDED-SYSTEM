void LED1_ON()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(9, LOW);
  digitalWrite(10,HIGH);
}
void LED2_ON()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  digitalWrite(8, LOW);
  digitalWrite(9,HIGH);
}

void LED3_ON()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
  digitalWrite(9,HIGH);
}

void LED4_ON()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  digitalWrite(9, LOW);
  digitalWrite(8,HIGH);
}
 
void setup()
{  
    // put your setup code here, to run once:
     
}

void loop() {
  // put your main code here, to run repeatedly:
  LED1_ON();
  delay(500);
  LED2_ON();
  delay(500);
  LED3_ON();
  delay(500);
  LED4_ON();
  delay(500);    
}
