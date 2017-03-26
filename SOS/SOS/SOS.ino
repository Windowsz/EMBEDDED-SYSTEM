void setup() {
  pinMode(A0, OUTPUT);
}

void dot() {
  digitalWrite(A0, HIGH);   
  delay(400);                      
  digitalWrite(A0, LOW);   
  delay(400);                  
}
void dash() {
  digitalWrite(A0, HIGH);   
  delay(1000);                      
  digitalWrite(A0, LOW);   
  delay(1000);      
}

void loop() {
  dot();
  dot();
  dot();
  dash();
  dash();
  dash();
}

