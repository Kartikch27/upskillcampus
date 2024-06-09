int ldrpin = A0;
int led = 7;
void setup()
{
  serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  int data = analogRead(ldrPin);
  serial.printn("");
  serial.println("Light Sensor");
  serial.println("value=");
  serial.print(data);
  if(data<+threshold)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(ledm,LOW);
  }
}