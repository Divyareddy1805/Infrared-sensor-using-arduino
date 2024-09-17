int sensorpin = 4;
int buzzer = 5;
int sensorvalue = 0; 
void setup() {
  // put your setup code here, to run once:
 pinMode(buzzer, OUTPUT);
 pinMode(sensorpin, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 sensorvalue = digitalRead(sensorpin);
 digitalWrite(buzzer, HIGH);
 Serial.println(sensorvalue);
 if(sensorvalue == LOW)
 {
  digitalWrite(buzzer, LOW);
 }
 else
 {
  digitalWrite(buzzer, HIGH);
 }
 delay(1000);
}
