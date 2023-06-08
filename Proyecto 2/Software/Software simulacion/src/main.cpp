// Comando de voz, para encender una lampara y un ventilador
#include <Arduino.h>

/* Definiciones */
String voice;

void setup() {

  Serial.begin(9600); // inicial puerto
  pinMode(5, OUTPUT); // salida 1
  pinMode(6, OUTPUT); // salida 2

}

void loop() {
  while(Serial.available()){
    delay(4);
    char c = Serial.read();
    voice +=c;
  }
  
  if(voice.length()>0){
     Serial.println(voice);
     if(voice == "Encender lámpara" || voice == "encender lámpara")   // Encender Luz
      {digitalWrite(5, HIGH);}
     else if(voice == "Apagar lámpara" || voice == "apagar lámpara")  // Apagar Lez
      {digitalWrite(5, LOW);}
     else if(voice == "encender ventilador" || voice == "Encender ventilador" )  // Encender ventilador
      {digitalWrite(6, HIGH);}
     else if(voice == "Apagar ventilador" || voice == "apagar ventilador")       // Apagar ventilador
      {digitalWrite(6, LOW);}
     else if(voice == "encender todo" || voice == "Encender todo")               // Encender todo
      {digitalWrite(5, HIGH);
       digitalWrite(6, HIGH);}
     else if(voice == "Apagar todo" || voice == "apagar todo")                   // Apagar todo
      {digitalWrite(5, LOW);
       digitalWrite(6, LOW);}
     voice = "";
  } 
}
  
