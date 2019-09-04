int pins[] = {3,4,5,6,7,8,9,10};

void setup() {
  int i;
  for(i=0;i<8;i++) {
    pinMode(pins[i], OUTPUT);
  }
 
}
void loop() {
  static int i = 0;
  if(i == 8)
  {
    i= 0;
  }
  else 
  {
    digitalWrite(i+3, HIGH);
    delay(500);
    digitalWrite(i+3, LOW);
    delay(500);
    i++;
  }

}
