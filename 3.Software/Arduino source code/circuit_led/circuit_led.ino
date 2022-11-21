
#define led 0
#define tx 1
#define rx 3
#define key1 34
#define key2 35
#define key3 36
#define key4 39
#define beep 2
#define Motor1A 32
#define Motor1B 33
#define Motor2A 25
#define Motor2B 26
#define Motor3A 19
#define Motor3B 18
#define Motor4A 5
#define Motor4B 17

#define StepB2 Motor1A
#define StepB1 Motor1B
#define StepA2 Motor2A
#define StepA1 Motor2B

#define yanshi 50


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(StepA1, OUTPUT);
  pinMode(StepA2, OUTPUT);
  pinMode(StepB1, OUTPUT);
  pinMode(StepB2, OUTPUT);

  digitalWrite(StepA1, LOW);
  digitalWrite(StepA2, LOW);
  digitalWrite(StepB1, LOW);
  digitalWrite(StepB2, LOW);

  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(StepA1, HIGH);
  digitalWrite(StepA2, LOW);
  digitalWrite(StepB1, LOW);
  digitalWrite(StepB2, LOW);
  delay(yanshi);
  digitalWrite(StepA1, LOW);
  digitalWrite(StepA2, LOW);
  digitalWrite(StepB1, HIGH);
  digitalWrite(StepB2, LOW);
  delay(yanshi);
  digitalWrite(StepA1, LOW);
  digitalWrite(StepA2, HIGH);
  digitalWrite(StepB1, LOW);
  digitalWrite(StepB2, LOW);
  delay(yanshi);
  digitalWrite(StepA1, LOW);
  digitalWrite(StepA2, LOW);
  digitalWrite(StepB1, LOW);
  digitalWrite(StepB2, HIGH);
  delay(yanshi);

}
