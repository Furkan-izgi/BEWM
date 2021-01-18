// These numbers are port numbers in Arduino Mega.
#define rightHandTrig 23 
#define echosagel 22

#define trigsolel 25
#define echosolel 24
    
#define trigonust 29
#define echoonust 28

#define trigsolust 33
#define echosolust 32

#define trigsagust 31
#define echosagust 30

#define trigsagalt 35
#define echosagalt 34

#define trigsolalt 37
#define echosolalt 36

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
pinMode(trigsagel,OUTPUT);
pinMode(echosagel,INPUT);
    
pinMode(trigsolel,OUTPUT);
pinMode(echosolel,INPUT);
    
pinMode(trigonust,OUTPUT);
pinMode(echoonust,INPUT);
    
pinMode(trigsolust,OUTPUT);
pinMode(echosolust,INPUT);                    
   
pinMode(trigsagust,OUTPUT);
pinMode(echosagust,INPUT);
    
pinMode(trigsagalt,OUTPUT);
pinMode(echosagalt,INPUT);
    
pinMode(trigsolalt,OUTPUT);
pinMode(echosolalt,INPUT);
    
pinMode(3,OUTPUT);
    
pinMode(4,OUTPUT);
    
pinMode(5,OUTPUT);
    
pinMode(6,OUTPUT);
    
pinMode(7,OUTPUT);          
    
pinMode(8,OUTPUT);
    
pinMode(9,OUTPUT);
        
}  
void loop() {
    
  for(i = 1;i <= 3;i++){
        
    if(i == 1){ //sagel
        
       digitalWrite(trigsagel,LOW);
       delayMicroseconds(2);
       digitalWrite(trigsagel,HIGH);
       delayMicroseconds(10);     
       digitalWrite(trigsagel,LOW);
       long deger;
       deger = pulseIn(echosagel,HIGH);                      
       sagelcm = deger / 58.2;
       
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
        
    if(i == 2){ //solel
        
       digitalWrite(trigsolel,LOW);
       delayMicroseconds(2);
       digitalWrite(trigsolel,HIGH);
       delayMicroseconds(10);     
       digitalWrite(trigsolel,LOW);
       long deger;
       deger = pulseIn(echosolel,HIGH);                      
       solelcm = deger / 58.2;
       
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
        
   if(i == 3) { //onust
        
       digitalWrite(trigonust,LOW);
       delayMicroseconds(2);
       digitalWrite(trigonust,HIGH);
       delayMicroseconds(10);     
       digitalWrite(trigonust,LOW);
       long deger;
       deger = pulseIn(echoonust,HIGH);                      
       onustcm = deger / 58.2;
       
       if(onustcm > 9 && onustcm < 41){ //onustcm 10 ile 40 arasında  ise 170 voltaj ver
                analogWrite(5,170);
            }
       if(onustcm >=0  && onustcm < 11){ //onustcm 0 ile 10 arasında  ise 230 voltaj ver 
                analogWrite(3,230);
            }
             
           
       else{
               analogWrite(5,0); }
    }

   }
    
   for(k = 1;k <= 4;k++){
    
       if(k == 1){ //solust
        
       digitalWrite(trigsolust,LOW);
       delayMicroseconds(2);
       digitalWrite(trigsolust,HIGH);
       delayMicroseconds(10);     
       digitalWrite(trigsolust,LOW);
       long deger;
       deger = pulseIn(echosolust,HIGH);                      
       solustcm = deger / 58.2;
       
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
            
           if(k == 2){ //sagust
        
       digitalWrite(trigsagust,LOW);
       delayMicroseconds(2);
       digitalWrite(trigsagust,HIGH);
       delayMicroseconds(10);     
       digitalWrite(trigsagust,LOW);
       long deger;
       deger = pulseIn(echosagust,HIGH);                      
       sagustcm = deger / 58.2;
       
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
    
            if(k == 3){ //sagalt
        
       digitalWrite(trigsagalt,LOW);
       delayMicroseconds(2);
       digitalWrite(trigsagalt,HIGH);
       delayMicroseconds(10);     
       digitalWrite(trigsagalt,LOW);
       long deger;
       deger = pulseIn(echosagalt,HIGH);                      
       sagaltcm = deger / 58.2;
       
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
        
       if(k == 4){ //solalt
        
       digitalWrite(trigsolalt,LOW);
       delayMicroseconds(2);
       digitalWrite(trigsolalt,HIGH);
       delayMicroseconds(10);     
       digitalWrite(trigsolalt,LOW);
       long deger;
       deger = pulseIn(echosolalt,HIGH);                      
       solaltcm = deger / 58.2;
       
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


