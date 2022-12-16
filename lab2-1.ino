#define led1 12
#define led2 15
const int led3 = 2;
const int led4 = 17;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, HIGH);
  delay(50);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(50);
  
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(50);
  
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(50);
}
