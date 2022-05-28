bool butonDurum;
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
butonDurum=digitalRead(2);
if(butonDurum==1){
  digitalWrite(3,1);
  digitalWrite(4,1);
  }
  else{
  digitalWrite(3,0);
  digitalWrite(4,0); 
    }
}
