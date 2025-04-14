#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>


ESP8266WiFiMulti wifiMulti;
boolean connectioWasAlive = true;


void setup(){
  /* notification begin */
  Serial.begin(9600);
  Serial.print("Connecting to...");
  /* Wifi setup */
  wifiMulti.addAP("Le Tu_2.4G", "17012005");
  wifiMulti.addAP("MyASUS", "10010001");
}


void loop(){
  monitorWiFi();
}


void monitorWiFi(){
  if(wifiMulti.run() != WL_CONNECTED){
    if( connectioWasAlive == true ){
      connectioWasAlive = false;
      Serial.print("Looking for WiFi");
    }
    Serial.print(".");
    delay(500);
  }
  else if ( connectioWasAlive == false ){
    connectioWasAlive = true;
    Serial.printf("connected to %s\n", WiFi.SSID().c_str());
  }
}
