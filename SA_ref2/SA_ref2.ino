void setup()
{
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  Serial.setTimeout(100);
}

void loop()
{
  if (Serial.available()){
  	int data = Serial.readString().toInt();  //  0-1023 range
    
    //  mapping data from 0-255
    data = map(data , 0 , 1023 , 0 , 255);
    analogWrite(9 , data);
  }
}

