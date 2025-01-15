int led=8;
int buzzer=13;
int dl=1000;
void setup()
{
	pinMode(A0, INPUT);
  	pinMode(A1, INPUT);
  	pinMode(led, OUTPUT);
  	pinMode(buzzer, OUTPUT);
  	Serial.begin(9600);
  	
}

void loop()
{
	float v1=analogRead(A0);
  	float v2=(v1/1023)*5000;
  	float temp=(v2-500)*10;
  	float gas=analogRead(A1);
  if(temp>=500){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  if(gas>=250){
    digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
  }
  Serial.print("the temp is : ");
  Serial.println(temp);
  Serial.print("\t");
  Serial.print("GasSensor: ");
  Serial.println(gas);
  delay(dl);
}
