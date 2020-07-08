#define echoPin 4
#define trigPin 5
#define pump 7
#define pump2 8
#define greenled 13
int long duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(pump, OUTPUT);
  pinMode(pump2, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop() {
  digitalWrite(greenled, LOW);
  
  digitalWrite(trigPin, LOW);
  delay(2); 
  digitalWrite(trigPin, HIGH);
  delay(10); 
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance=(duration*0.034/2);

  if(distance<=10)
  {
    digitalWrite(pump, HIGH);
    digitalWrite(pump2, LOW);
    digitalWrite(greenled, HIGH);
    delay(2500);
    digitalWrite(pump, LOW);
    delay(2000);
  }

}
