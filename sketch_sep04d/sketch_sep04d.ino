int pins[] = {3,4,5,6,7,8,9,10};

void setup() {
  int i;
  for(i=0;i<8;i++) {
    pinMode(pins[i], OUTPUT);
  }
 
}
void loop() {
  static int i = 1;
  int j;
  if(i == 1)
  {
    for(j=0; j<7;j++)
    {
      digitalWrite(j+3, HIGH);
      delay(50);
      digitalWrite(j+3, LOW);
      delay(50);
    }
    i = 0;
  }
  else if(i == 0)
  {
    for(j=7; j>0;j--)
    {
      digitalWrite(j+3, HIGH);
      delay(50);
      digitalWrite(j+3, LOW);
      delay(50);
    }
    i = 1;
  }
  

}
