int LDR_In = A0;
int lichtHoeveelheid;

uint8_t Led1 = D3;
uint8_t Led2 = D5;
uint8_t Led6 = D6;

void setup(){
  Serial.begin(9600);
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led6,OUTPUT);
}

void loop(){
  lichtHoeveelheid = analogRead(LDR_In);
  Serial.println(lichtHoeveelheid);
  
  if ( lichtHoeveelheid < 675){
    digitalWrite(Led1, HIGH);
  }
  else{
    digitalWrite(Led1, LOW);
  }

  if ( lichtHoeveelheid < 450){
    digitalWrite(Led2, HIGH);
  }
  else{
    digitalWrite(Led2, LOW);
  }
  
  if ( lichtHoeveelheid < 225){
    digitalWrite(Led6, HIGH);
  }
  else{
    digitalWrite(Led6, LOW);
  }
  
  delay(1000);
}
