#include <TextFinder.h>
#include <String.h>


String Remote="001312121813";

int motor=5;

int X;
int Y;
char dato='p';
int estado=0;

int longitudCadena=0;
int contador=0;

void setup() {
  Serial.begin(9600);
  pinMode(motor,OUTPUT);
  analogWrite(motor,250);
    Serial.println("Empezando Comunicacion");
  delay(1000);
  


}

void loop() {
  
  if(Serial.available()>0)
  {
     dato=Serial.read();
    
  }



 
 if(dato=='u'&& estado<255){
   estado+=5;
   Serial.print("estado es :");
   Serial.println(estado);
 }
 else{
   if(dato=='d'){
     if(estado-5>0){
       estado=estado-5;
          Serial.print("estado es :");
         Serial.println(estado);
     }
     else{
       estado=0;
          Serial.print("estado es :");
         Serial.println(estado);
     }
   }


 }
   

  analogWrite(motor,estado);
    



                        
  }
  

