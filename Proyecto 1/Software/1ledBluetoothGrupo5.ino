
int pinLed=3;
int retorno;//variable que se retorna a la app
char caracter;//caracter que voy obteniendo al hacer Serial.read();. 

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
  
}

void loop() {

  if(Serial.available()>0){//SI HAY ALGO POR LEER
        caracter=Serial.read();

        switch(caracter){
              case 'C':digitalWrite(pinLed,HIGH);//enciendo el led
                      retorno=1;
                       break;
              case 'c':digitalWrite(pinLed,LOW);//apago el led
                      retorno=0;
                       break;
              
                     
          }//fin switch
          Serial.println(retorno);
    }//fin if

  
}//fin loop 

