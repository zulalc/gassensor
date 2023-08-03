int esikDeger = 200;
int deger;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
 deger = analogRead(A0);

 if(deger > esikDeger){
   Serial.print(deger);
 } else {
   Serial.print("Could not sense it.")
 }

}
