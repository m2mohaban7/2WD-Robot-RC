int ENA = 3;
int ENB = 5;
int IN1 = 2;
int IN2 = 4;
int IN3 = 7;
int IN4 = 8;
int second = 1000;
char reading;

void setup() {
  Serial.begin(9600);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  
  analogWrite(ENA,250);
  analogWrite(ENB,250);
}
void loop() {
    if (Serial.available()) { 
    reading = Serial.read();
  }
    switch (reading) {
    case 'F' :
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH); 
    Serial.println("Forward");
    break;
    case 'B' :
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    Serial.println("Backward");
    break;
    case 'R' :
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    Serial.println("Right");
    break;
    case 'L' :
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);  
    Serial.println("Left");
    break;
    case 'S' :
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
    Serial.println("Stop");
    break;
  }
}
  