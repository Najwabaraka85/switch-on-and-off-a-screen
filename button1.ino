int led = 9 ;
int button = 11 ;
int reading = 0 ;
int counter = 0 ;
void setup() {
 pinMode (led , OUTPUT);
 pinMode (button , INPUT);
}
void loop(){
  reading = digitalRead ( button );
  if (reading == HIGH)
  {counter++;
  if((counter %2)==0)
  { digitalWrite(led , HIGH);
  }
  else
  { digitalWrite(led , LOW);
  }
  delay(250);
  }
  }
