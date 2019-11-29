
 int joyPin1 = 14;                // slider variable connecetd to analog pin 0
 int joyPin2 = 15;                // slider variable connecetd to analog pin 1
 int value1 = 0;                  // variable to read the value from the analog pin 0
 int value2 = 0;                  // variable to read the value from the analog pin 1

 void setup() {
  Serial.begin(9600);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);  
  pinMode(36, OUTPUT);
  digitalWrite(28, LOW);
  digitalWrite(29, LOW);
  digitalWrite(30, LOW);
  digitalWrite(31, LOW);
  digitalWrite(32, HIGH);
  Serial.println("HOME");
  delay(1000);
  digitalWrite(32, LOW);
  digitalWrite(33, HIGH);
  Serial.println("DWN");
  delay(1000);
  digitalWrite(33, LOW);
  digitalWrite(34, HIGH);
  Serial.println("CW");
  delay(1000);
  digitalWrite(34, LOW);
  digitalWrite(35, HIGH);
  Serial.println("UP");
  delay(1000);
  digitalWrite(35, LOW);
  digitalWrite(36, HIGH);
  Serial.println("CCW");
  delay(1000);
  digitalWrite(36, LOW);
 }

 void loop() {
  // reads the value of the variable resistor
  value1 = analogRead(joyPin1);  
  // this small pause is needed between reading
  // analog pins, otherwise we get the same value twice
  delay(100);            
  // reads the value of the variable resistor
  value2 = analogRead(joyPin2);  
  if (value2 > 900 || value2 < 100){
    Serial.print("UP/DWN ");
    if (value2 > 900){
      Serial.println(" DWN");
      digitalWrite(28, HIGH);
    }
    else{
      Serial.println(" UP");
      digitalWrite(29, HIGH);
    }
  }
  else{
    digitalWrite(28, LOW);
    digitalWrite(29, LOW);   
  }
 if (value1 > 900 || value1 < 100){
    Serial.print("CW/CWW ");
    if (value1 > 900){
      Serial.println(" CW");
      digitalWrite(30, HIGH);
    }
    else{
      Serial.println(" CCW");
      digitalWrite(31, HIGH);
    }
  }
  else{
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);  
  }
  delay(1000);
 }
