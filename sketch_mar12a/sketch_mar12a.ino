int led1 = 2;
int etatLed1;

int led2 = 3;
int etatLed2;


void setup()
{
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
}
void loop()
{
    etatLed1 = digitalRead(led1);
    etatLed2 = digitalRead(led2);
    
    
    if(etatLed1 == HIGH){
      delay(5000);
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      
      Serial.println("nuit");
    }
    else{
      delay(5000);
      digitalWrite(led2, LOW);
      digitalWrite(led1, HIGH);
      
      Serial.println("jour");
    }    
}
