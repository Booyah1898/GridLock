


#define echoPinN 46 // Echo Pin
#define echoPinW 48 
#define echoPinS 50
#define echoPinE 52

#define trigPinN 47 // Trigger Pin
#define trigPinW 49
#define trigPinS 51
#define trigPinE 53 



                  #define LEDRN 22
                    #define LEDYN 24 
                      #define LEDGN 26

                  #define LEDRW 28
                    #define LEDYW 30 
                      #define LEDGW 32

                  #define LEDRS 34
                    #define LEDYS 36 
                      #define LEDGS 38


                  #define LEDRE 40
                     #define LEDYE 42 
                      #define LEDGE 44




int maximumRange = 25; 
int minimumRange = 0; 

   int sensorValueN = analogRead(A0);
  
  float voltageN = sensorValueN * (5.0 / 1023.0);

  int sensorValueW = analogRead(A1);
  
  float voltageW = sensorValueW * (5.0 / 1023.0);

  int sensorValueS = analogRead(A2);
  
  float voltageS = sensorValueS * (5.0 / 1023.0);

  int sensorValueE = analogRead(A3);
  
  float voltageE = sensorValueE * (5.0 / 1023.0);


long durationN, distanceN; 
long durationW, distanceW;
long durationS, distanceS;
long durationE, distanceE;

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  
    Serial.begin (9600);
     lcd.begin(16, 2);

     
  pinMode(trigPinN, OUTPUT);
    
  pinMode(echoPinN, INPUT);
        
  pinMode(LEDRN, OUTPUT);
     
  pinMode(LEDYN, OUTPUT);
            
  pinMode(LEDGN, OUTPUT);



               pinMode(trigPinW, OUTPUT);
    
               pinMode(echoPinW, INPUT);
        
               pinMode(LEDRW, OUTPUT);
     
               pinMode(LEDYW, OUTPUT);
            
               pinMode(LEDGW, OUTPUT);
  



                   pinMode(trigPinS, OUTPUT);
    
                   pinMode(echoPinS, INPUT);
        
                    pinMode(LEDRS, OUTPUT);
     
                    pinMode(LEDYS, OUTPUT);
            
                    pinMode(LEDGS, OUTPUT);




                             pinMode(trigPinE, OUTPUT);
    
                              pinMode(echoPinE, INPUT);
          
                              pinMode(LEDRE, OUTPUT);
     
                                pinMode(LEDYE, OUTPUT);
            
                                pinMode(LEDGE, OUTPUT);
            
       
    

}

void loop() 
{
      
      
      
      digitalWrite(trigPinN, LOW); 
      //delayMicroseconds(1); 

      digitalWrite(trigPinN, HIGH);
      //delayMicroseconds(1); 
 
      digitalWrite(trigPinN, LOW);
      durationN = pulseIn(echoPinN, HIGH);


                                             
                                                         digitalWrite(trigPinW, LOW); 
                                                          //delayMicroseconds(1); 
                                                    
                                                          digitalWrite(trigPinW, HIGH);
                                                          //delayMicroseconds(1); 
                                                     
                                                          digitalWrite(trigPinW, LOW);
                                                          durationW = pulseIn(echoPinW, HIGH);


                                                           
                                                                                                              digitalWrite(trigPinE, LOW); 
                                                                                                              //delayMicroseconds(1); 
                                                                                                        
                                                                                                              digitalWrite(trigPinE, HIGH);
                                                                                                              //delayMicroseconds(1); 
                                                                                                         
                                                                                                              digitalWrite(trigPinE, LOW);
                                                                                                              durationS = pulseIn(echoPinS, HIGH);

                                                                                                                                                            digitalWrite(trigPinS, LOW); 
                                                                                                                                                            //delayMicroseconds(1); 
                                                                                                                                                      
                                                                                                                                                            digitalWrite(trigPinS, HIGH);
                                                                                                                                                            //delayMicroseconds(1); 
                                                                                                                                                       
                                                                                                                                                            digitalWrite(trigPinS, LOW);
                                                                                                                                                            durationE = pulseIn(echoPinE, HIGH);
                                                                                                                                                      
                                                                                                        



                                    


      
 
 //Calculate the distance based on the speed of sound.

 
      distanceN = durationN/58.2;
       distanceW = durationW/58.2;
        distanceS = durationS/58.2;
         distanceE = durationE/58.2;
      
    while(1)
   {
       pinMode(LEDGS, OUTPUT);
       digitalWrite(LEDGS, HIGH);

       pinMode(LEDGE, OUTPUT);
       digitalWrite(LEDGE, HIGH);

       pinMode(LEDGN, OUTPUT);
       digitalWrite(LEDGN, HIGH);
       
       pinMode(LEDGW, OUTPUT);
       digitalWrite(LEDGW, HIGH);
       
       delay(4000);
 }
       
while(1){
      if((distanceN < maximumRange || distanceN > minimumRange)&&(distanceS < maximumRange || distanceS > minimumRange)&&(distanceS < maximumRange || distanceS > minimumRange)&&(distanceS < maximumRange || distanceS > minimumRange)
       {
        digitalWrite(LEDGE, LOW);
        digitalWrite(LEDGS, LOW);
        digitalWrite(LEDRE, HIGH);
        digitalWrite(LEDRS, HIGH);
        delay(2000);
        digitalWrite(LEDRS, LOW);
        digitalWrite(LEDGS,HIGH);
        delay(2000);
        digitalWrite(LEDGS,LOW);
        digitalWrite(LEDRS,HIGH);
         digitalWrite(LEDRE,LOW);
         digitalWrite(LEDGE,HIGH);
         delay(2000);
      break;
       }
        
        delay(50);
      //Serial.println("GREEN");
     // lcd.println("GREEN");
      delay(1000);
       // lcd.noDisplay();
       
      pinMode(LEDRN, OUTPUT);
      digitalWrite(LEDRN, HIGH);

      pinMode(LEDRW, OUTPUT);
      digitalWrite(LEDRW, HIGH);



      pinMode(LEDRS, OUTPUT);
      digitalWrite(LEDRS, HIGH);



      pinMode(LEDRE, OUTPUT);
      digitalWrite(LEDRE, HIGH);
      


delay(2000);
        while( 1)
      
          {
digitalWrite(LEDRN, LOW);
       pinMode(LEDGN, OUTPUT);
           digitalWrite(LEDGN, HIGH);
              delay(5000);
              digitalWrite(LEDGN, LOW);
              digitalWrite(LEDRN, HIGH);
               break;
              }

                //else if(analogRead(A1)==voltageW )
                
                 while(1)
                {
                  digitalWrite(LEDRW, LOW);
                  pinMode(LEDGW, OUTPUT);
                     digitalWrite(LEDGW, HIGH);
                       delay(5000);
                       digitalWrite(LEDGW , LOW);
                       digitalWrite(LEDRW, HIGH);
                         break;
                  
                  
                  }

                  // else if(analogRead(A2)==voltageS )
                  while(1)
                {
                  digitalWrite(LEDRS, LOW);
                  pinMode(LEDGS, OUTPUT);
                   digitalWrite(LEDGS, HIGH);
                    delay(5000);
                    digitalWrite(LEDGS, LOW);
                    digitalWrite(LEDRS, HIGH);
                     break;
                  }



                  //else if(analogRead(A3)==voltageE )
                 while(1)
                {
                  digitalWrite(LEDRE, LOW);
                     pinMode(LEDGE, OUTPUT);
                      digitalWrite(LEDGE, HIGH);
                       delay(5000);
                       digitalWrite(LEDGE, LOW);
                       digitalWrite(LEDRE, HIGH);
                       break;
                  
                  }


}

      delay(1000);

break;
      
        break;
 }

/* while(1)
 {
   //while((distanceN < maximumRange && distanceN > minimumRange) && (distanceW < maximumRange && distanceW > minimumRange ) ||(distanceS < maximumRange && distanceS > minimumRange) && (distanceE < maximumRange && distanceE > minimumRange) )

        

}*/
 }
 

