#define PhotoTran A0
#define THRESHOLD 315 // The ADC value that is equivalent to a 3V threshold

int voltage=0;
void setup() 
{
  Serial.begin(1200);
  pinMode(12,OUTPUT);
}

void loop() 
{
while(1)
{
  voltage = analogRead(PhotoTran);
  if (voltage > THRESHOLD)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
    while (Serial.available())
      {
        String s1 = Serial.readStringUntil('\n');
        Serial.println(s1);
      }
}
}
