int sensorPin = A0;
int sensorValue = 0;  
void setup() {
  pinMode(A5, OUTPUT); 
  Serial.begin(9600); 
}
void loop() {
  sensorValue = analogRead(sensorPin);    
  Serial.println(sensorValue); 
  if(sensorValue < 20) {
     digitalWrite(A5,HIGH); 
     delay(500); 
     digitalWrite(A5,LOW); 
     delay(500); 
  }
 else {
    digitalWrite(A5,HIGH); 
    delay(200); 
    digitalWrite(A5,LOW); 
    delay(200); 
 }           
}
