/*
 Module name: IR Sensor, FC-51
 There is a blue button that you can used to change the detective distance of this sensor.

 There are 3 pin of module, Vcc, GND and Output. nornally it gives a high output, and when there is any obstacle, this pin turn to low.
*/

int led = 8;
int sensor = 7;

void setup()
{
  pinMode(led, OUTPUT); //port to control led
  pinMode(sensor, INPUT); //port to detective IR sensor
}
void loop()
{

  if ( digitalRead(sensor) == LOW) // when there is any obstacle, output turn to low
  {
    digitalWrite(led, LOW);
  }
  else
  {
    digitalWrite(led, HIGH);
  }
}
