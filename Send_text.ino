#define LED 1
char* text = "Hello DCU";

int l=500; //To run the program 500 times and check for BER

void setup() {
  Serial.begin(4800);
}

void loop() 
{
    while(l>0)
  {
    for (int i=0;i<strlen(text);i++)
    {
      UART_byte();
    }
    l--;
  } 

  while(1);

}
void UART_byte()
{
  for(int i=0;i<strlen(text);i++)
    {
      char x=text[i];
      Serial.println(x);
      delay(1500);  
    }
}
