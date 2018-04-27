void setup() {
  // put your setup code here, to run once:

}

void loop() {
 for(;;){
  if (Serial.available() ) {
     Serial.print("Enter a Number");
     Serial.print("1 - HELP");
     Serial.print("2 - SHOW");
     Serial.print("3 - SET");
     Serial.print("4 - TIME");
     serinput = Serial.read();
     switch(serinput){
      case 1:
      Serial.print("You selected (1) for HELP");
      Serial.print("SHOW, Displays all system parameters");
      Serial.print("SET, allows you to set the SSID for internet access");
      Serial.print("TIME, allows you to set the timezone");
      break;

      case 2:
      Serial.print("SSID: ");
      Serial.print(ssid);
      Serial.print("Password: ");
      Serial.print(password);
      break;

      case 3:
      //......
      break;
      //.......
      case 4:
      break;
     }
//........
}
}
}
