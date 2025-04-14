#include <ESP8266WiFi.h>


const char* ssid= "Le Tu_2.4G";
const char* password= "17012005";

void setup(){
  /* notification begin */
  Serial.begin(9600);
  Serial.print("Connecting to...");
  Serial.println(ssid);

  /* Wifi setup */
  WiFi.begin(ssid, password);
  while( WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print('.');
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}


void loop(){

}
