
 int joyPin1 = 14;                // slider variable connecetd to analog pin 0
 int joyPin2 = 15;                // slider variable connecetd to analog pin 1
 int value1 = 0;                  // variable to read the value from the analog pin 0
 int value2 = 0;                  // variable to read the value from the analog pin 1

 void setup() {
  Serial.begin(9600);
 }

//int treatValue(int data) {
//  return (data * 9 / 1024) + 48;
// }

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
    }
    else{
      Serial.println(" UP");
    }
  }
 if (value1 > 900 || value1 < 100){
    Serial.print("CW/CWW ");
    if (value1 > 900){
      Serial.println(" CCW");
    }
    else{
      Serial.println(" CW");
    }
  }
  delay(1000);
 }
