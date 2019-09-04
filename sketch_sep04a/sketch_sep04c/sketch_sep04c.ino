int pins[] = {3,4,5,6,7,8,9,10};

void setup() {
  int i;
  for(i=0;i<8;i++) {
    pinMode(pins[i], OUTPUT);
  }
 pinMode(13,INPUT);
}
void loop() {
  static int i = 1;
  static bool isup = 1;
  digitalWrite(i+2,HIGH);
  delay(50);
  digitalWrite(i+2,LOW);
  delay(50);
  if(isup == 1)
  {
    i++;
  }
  else if (isup == 0)
  {
    i--;
  }
  if(i==9)
  {
    i=1;
  }
  else if(i==0)
  {
    i=8;
  }
  if(digitalRead(13) == 1)
  {
    isup=1;
  }
  else if(digitalRead(13) == 0)
  {
    isup=0;
  }
  
}
