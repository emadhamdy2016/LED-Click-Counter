int counter=0;

void setup() {
  for (int i=5; i<=7; i++)
pinMode(i, OUTPUT);
pinMode(8, 0);
}
void loop()
{
  if (digitalRead(8)==1){
   counter++;
   if (counter==1)
  digitalWrite(5, HIGH);
  else if (counter==2)
  digitalWrite(6, HIGH);
  else if (counter==3)
  digitalWrite(7, HIGH);
else
  {
 for (int i=7; i>=5; i--)
   
   digitalWrite(i, 0);
    counter=0;
  }
   delay(250); 
   
 }
}