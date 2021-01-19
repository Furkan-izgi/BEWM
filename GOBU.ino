// These numbers are port numbers in Arduino Mega.
#define trigRight 23 
#define echoRight 22

#define trigLeft 25
#define echoLeft 24
    
#define trigTopFront 29
#define echoTopFront 28

#define trigTopLeft 33
#define echoTopLeft 32

#define trigTopRight 31
#define echoTopRight 30

#define trigBottomRight 35
#define echoBottomRight 34

#define trigBottomLeft 37
#define echoBottomLeft 36

//These numbers are analog-port numbers in Arduino Mega.
int mRight = 3;
int mLeft = 4;
int mTopFront = 5;
int mTopLeft = 6;
int mTopRight = 7;    
int mBottomRight = 8;
int mBottomLeft = 9;

unsigned int cmRight,cmLeft,cmTopFront,cmTopLeft,cmTopRight,cmBottomRight,cmBottomLeft;

int i;

void setup() {
    
Serial.begin(9600);// We started the monitor in Arduino IDE

// In the below codes are decide which ones are output or input pin
pinMode(trigRight,OUTPUT);
pinMode(echoRight,INPUT);
    
pinMode(trigLeft,OUTPUT);
pinMode(echoLeft,INPUT);
    
pinMode(trigTopFront,OUTPUT);
pinMode(echoTopFront,INPUT);
    
pinMode(trigTopLeft,OUTPUT);
pinMode(echoTopLeft,INPUT);                    
   
pinMode(trigTopRight,OUTPUT);
pinMode(echoTopRight,INPUT);
    
pinMode(trigBottomRight,OUTPUT);
pinMode(echoBottomRight,INPUT);
    
pinMode(trigBottomLeft,OUTPUT);
pinMode(echoBottomLeft,INPUT);
    
pinMode(3,OUTPUT);
    
pinMode(4,OUTPUT);
    
pinMode(5,OUTPUT);
    
pinMode(6,OUTPUT);
    
pinMode(7,OUTPUT);          
    
pinMode(8,OUTPUT);
    
pinMode(9,OUTPUT);
        
}  
void loop() {
    
for(i = 1;i <= 7;i++){
     
     if(i == 1){ //Right
          
          digitalWrite(trigRight,LOW);
          delayMicroseconds(2);
          digitalWrite(trigRight,HIGH);
          delayMicroseconds(10);     
          digitalWrite(trigRight,LOW);
          long value;
          value = pulseIn(echoRight,HIGH);                      
          cmRight = value / 58.2;
          
          if(cmRight > 9 && cmRight < 41){ //If cmRight is between 10 and 40 cm, give 1,5V 
                    analogWrite(3,170);
               }  
          if(cmRight >=0  && cmRight < 11){ //If cmRight is between 10 and 40 cm, give 1,5V 
                    analogWrite(3,225);
               }
          else{
               analogWrite(3,0); //Else, give 0V                         
               }
     }
          
     if(i == 2){ //Left
          
          digitalWrite(trigLeft,LOW);
          delayMicroseconds(2);
          digitalWrite(trigLeft,HIGH);
          delayMicroseconds(10);     
          digitalWrite(trigLeft,LOW);
          long value;
          value = pulseIn(echoLeft,HIGH);                      
          cmLeft = value / 58.2;
          
          if(cmLeft > 9 && cmLeft < 41){ //If cmLeft is between 10 and 40 cm, give 1,5V
                    analogWrite(4,170);
               }  
          if(cmLeft >=0  && cmLeft < 11){ //If cmLeft is between 10 and 40 cm, give 3V
                    analogWrite(3,230);
               }
          else{
               analogWrite(4,0); //Else, give 0V                         
               }                  
     }
          
     if(i == 3){ //TopFront
          
          digitalWrite(trigTopFront,LOW);
          delayMicroseconds(2);
          digitalWrite(trigTopFront,HIGH);
          delayMicroseconds(10);     
          digitalWrite(trigTopFront,LOW);
          long value;
          value = pulseIn(echoTopFront,HIGH);                      
          cmTopFront = value / 58.2;
          
          if(cmTopFront > 9 && cmTopFront < 41){ //If cmTopFront is between 10 and 40 cm, give 1,5V
                    analogWrite(5,170);
               }
          if(cmTopFront >=0  && cmTopFront < 11){ //If cmTopFront is between 10 and 40 cm, give 3V 
                    analogWrite(3,230);
               } 
          else{
               analogWrite(5,0); //Else, give 0V
               }
     }
    
     if(i == 4){ //TopLeft

          digitalWrite(trigTopLeft,LOW);
          delayMicroseconds(2);
          digitalWrite(trigTopLeft,HIGH);
          delayMicroseconds(10);     
          digitalWrite(trigTopLeft,LOW);
          long value;
          value = pulseIn(echoTopLeft,HIGH);                      
          cmTopLeft = value / 58.2;

          if(cmTopLeft > 9 && cmTopLeft < 41){ //If cmTopLeft is between 10 and 40 cm, give 1,5V
                    analogWrite(6,170);
               } 
          if(cmTopLeft >=0  && cmTopLeft < 11){ //If cmTopLeft is between 10 and 40 cm, give 3V
                    analogWrite(3,230);
               }    
          else{
               analogWrite(6,0); //Else, give 0V                         
               }              
     } 
          
     if(i == 5){ //TopRight

          digitalWrite(trigTopRight,LOW);
          delayMicroseconds(2);
          digitalWrite(trigTopRight,HIGH);
          delayMicroseconds(10);     
          digitalWrite(trigTopRight,LOW);
          long value;
          value = pulseIn(echoTopRight,HIGH);                      
          cmTopRight = value / 58.2;

          if(cmTopRight > 9 && cmTopRight < 41){ //If cmTopRight is between 10 and 40 cm, give 1,5V
                    analogWrite(7,170);
               }
          if(cmTopRight >=0  && cmTopRight < 11){ //If cmTopRight is between 10 and 40 cm, give 3V
                    analogWrite(3,230);
               }
          else{
               analogWrite(7,0); //Else, give 0V                         
               }                        
     } 

     if(i == 6){ //BottomRight

          digitalWrite(trigBottomRight,LOW);
          delayMicroseconds(2);
          digitalWrite(trigBottomRight,HIGH);
          delayMicroseconds(10);     
          digitalWrite(trigBottomRight,LOW);
          long value;
          value = pulseIn(echoBottomRight,HIGH);                      
          cmBottomRight = value / 58.2;

          if(cmBottomRight > 9 && cmBottomRight < 41){ //If cmBottomRight is between 10 and 40 cm, give 1,5V
               }
          if(cmBottomRight >=0  && cmBottomRight < 11){ //If cmBottomRight is between 10 and 40 cm, give 3V
                    analogWrite(3,230);
               }         
          else{
               analogWrite(8,0); //Else, give 0V                         
               }   
     }    

     if(i == 7){ //BottomLeft

          digitalWrite(trigBottomLeft,LOW);
          delayMicroseconds(2);
          digitalWrite(trigBottomLeft,HIGH);
          delayMicroseconds(10);     
          digitalWrite(trigBottomLeft,LOW);
          long value;
          value = pulseIn(echoBottomLeft,HIGH);                      
          cmBottomLeft = value / 58.2;

          if(cmBottomLeft > 9 && cmBottomLeft < 41){ //If cmBottomLeft is between 10 and 40 cm, give 1,5V
                    analogWrite(9,170);
               } 
          if(cmBottomLeft >=0  && cmBottomLeft < 11){ //If cmBottomLeft is between 0 and 10 cm, give 3V
                    analogWrite(3,230);
               }     
          else{
               analogWrite(9,0); //Else, give 0V                      
               }                 
     } 
}
}


