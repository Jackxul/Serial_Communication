//Arduino Uno
//JackXul
//GPIO trigger Interrupt


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("This is a sample code showing how to use GPIO trigger Interrupt");
}

void loop() {
// put your main code here, to run repeatedly:
/*
Tempature behavior
+ below  7  -> danger   (Alert on) 
+ below 15  -> freezing (system stop)
+ 15 ~  18  -> exellent (system continue)
+ above 18  -> too warm (system start)
+ above 24  -> danger   (Alert On)
*/


  delay(1000);
}

