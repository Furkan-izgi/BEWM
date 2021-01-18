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
int sagelm = 3;
int solelm = 4;
int onustm = 5;
int solustm = 6;
int sagustm = 7;    
int sagaltm = 8;
int solaltm = 9;

unsigned int sagelcm,solelcm,onustcm,solustcm,sagustcm,sagaltcm,solaltcm;

int i,k;

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
          sagelcm = value / 58.2;
          
          if(sagelcm > 9 && sagelcm < 41){ //sağelcm 10 ile 40 arasında ise 170 voltaj ver 
                    analogWrite(3,170);
               }  
          if(sagelcm >=0  && sagelcm < 11){ //sağelcm 0 ile 10 arasında  ise 225 voltaj ver 
                    analogWrite(3,225);
               }
          else{
               analogWrite(3,0);                         
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
          solelcm = value / 58.2;
          
          if(solelcm > 9 && solelcm < 41){ //solelcm 10 ile 40 arasında  ise 170 voltaj ver
                    analogWrite(4,170);
               }  
          if(solelcm >=0  && solelcm < 11){ //solelcm 0 ile 10 arasında  ise 230 voltaj ver
                    analogWrite(3,230);
               }
          else{
               analogWrite(4,0);                         
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
          onustcm = value / 58.2;
          
          if(onustcm > 9 && onustcm < 41){ //onustcm 10 ile 40 arasında  ise 170 voltaj ver
                    analogWrite(5,170);
               }
          if(onustcm >=0  && onustcm < 11){ //onustcm 0 ile 10 arasında  ise 230 voltaj ver 
                    analogWrite(3,230);
               } 
          else{
               analogWrite(5,0); 
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
          solustcm = value / 58.2;

          if(solustcm > 9 && solustcm < 41){ //solustcm 10 ile 40 arasında  ise 170 voltaj ver
                    analogWrite(6,170);
               } 
          if(solustcm >=0  && solustcm < 11){ //solustcm 0 ile 10 arasında  ise 230 voltaj ver
                    analogWrite(3,230);
               }    
          else{
               analogWrite(6,0);                         
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
          sagustcm = value / 58.2;

          if(sagustcm > 9 && sagustcm < 41){ //solelcm 10 ile 40 arasında  ise 170 voltaj ver
                    analogWrite(7,170);
               }
          if(sagustcm >=0  && sagustcm < 11){ //solelcm 0 ile 10 arasında  ise 230 voltaj ver
                    analogWrite(3,230);
               }
          else{
               analogWrite(7,0);                         
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
          sagaltcm = value / 58.2;

          if(sagaltcm > 9 && sagaltcm < 41){ //sagaltcm 10 ile 40 arasında  ise 170 voltaj ver
                    analogWrite(8,170);
               }
          if(sagaltcm >=0  && sagaltcm < 11){ //sagaltcm 0 ile 10 arasında  ise 230 voltaj ver
                    analogWrite(3,230);
               }         
          else{
               analogWrite(8,0);                         
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
          solaltcm = value / 58.2;

          if(solaltcm > 9 && solaltcm < 41){ //solaltcm 10 ile 40 arasında  ise 170 voltaj ver
                    analogWrite(9,170);
               } 
          if(solaltcm >=0  && solaltcm < 11){ //solaltcm 0 ile 10 arasında  ise 230 voltaj ver
                    analogWrite(3,230);
               }     
          else{
               analogWrite(9,0);                         
               }                 
     } 
}
}


