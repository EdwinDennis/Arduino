
String Remote="201311290345";
char dato;



int xPin = A1;
int yPin = A0;
int buttonPin = 7;

int xPosition = 0;
int yPosition = 0;
int buttonState = 0;

int estado=0;

void setup() {
  Serial.begin(9600);

  
  
  //joystick
  
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);

  //activate pull-up resistor on the push-button pin
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
 
  if(Serial.available()>0){
    dato=Serial.read();

  //colocar aqui para leer cuando se tenga otro hc-05

      
  }
  
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(7);
  
if(yPosition==1023){
  Serial.println("u");
}
else
  if(yPosition==0){
    Serial.println("d");
  }
  
  



  
   
  delay(500);
    
    


  


}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
