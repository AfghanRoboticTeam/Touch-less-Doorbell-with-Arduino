const int trigPin = 4;
const int echoPin = 5;
const int buzzerPin = 8;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
   
    int duration = pulseIn(echoPin, HIGH);
    delay(50);
    
    int distance = duration / 29.1;
   
    if (distance < 20) {       
        digitalWrite(buzzerPin, HIGH);
        
    } else {       
        digitalWrite(buzzerPin, LOW);
    }
}
