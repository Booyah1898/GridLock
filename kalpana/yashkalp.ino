/*#define echoPinN 46 // Echo Pin
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




int maximumRange = 200; 
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
      
      //lcd.display();
      //lcd.println(distance);
      //delay(1000);
      //lcd.noDisplay();
 
 if ((distanceN >= maximumRange || distanceN <= minimumRange ) && (distanceW >= maximumRange || distanceW <= minimumRange)  && (distanceS >= maximumRange || distanceS <= minimumRange)  && (distanceE >= maximumRange || distanceE <= minimumRange))
 {


 
  //    Serial.println("RED");
  //    lcd.println("RED");
      delay(1000);
      
      //lcd.noDisplay();
       pinMode(LEDGN, OUTPUT);
       digitalWrite(LEDGN, HIGH);



       pinMode(LEDGW, OUTPUT);
       digitalWrite(LEDGN, HIGH);




       pinMode(LEDGS, OUTPUT);
       digitalWrite(LEDGN, HIGH);


       pinMode(LEDGE, OUTPUT);
       digitalWrite(LEDGN, HIGH);
       
       
     


 
 }
 
 else 
 
 {
 
     
     digitalWrite(LEDGN, LOW);
      digitalWrite(LEDGW, LOW);
       digitalWrite(LEDGS, LOW); 
        digitalWrite(LEDGE, LOW);
      //Serial.println(distance);
       
       delay(50);
       
while(1)
       
       {
  
      //Serial.println("YELLOW");
       //lcd.println(" YELLOW");
       //delay(1000);
        // lcd.noDisplay();
       pinMode(LEDYN, OUTPUT);
       digitalWrite(LEDYN, HIGH);
       delay(2000);
       digitalWrite(LEDYN , LOW);




        pinMode(LEDYW, OUTPUT);
       digitalWrite(LEDYW, HIGH);
       delay(2000);
       digitalWrite(LEDYW , LOW);



       pinMode(LEDYS, OUTPUT);
       digitalWrite(LEDYS, HIGH);
       delay(2000);
       digitalWrite(LEDYS , LOW);


       pinMode(LEDYE, OUTPUT);
       digitalWrite(LEDYE, HIGH);
       delay(2000);
       digitalWrite(LEDYE , LOW);


       
       break;
       }

 while((distanceN < maximumRange && distanceN > minimumRange) || (distanceW < maximumRange && distanceW > minimumRange )|| (distanceS < maximumRange && distanceS > minimumRange) || (distanceE < maximumRange && distanceE > minimumRange) )
 {
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
      



        if(analogRead(A0)==1023
        
        )
      
          {

       pinMode(LEDGN, OUTPUT);
           digitalWrite(LEDGN, HIGH);
              delay(5000);
              digitalWrite(LEDGN, LOW);
                continue;
              }

                else if(analogRead(A1)==voltageW )

                {
                  pinMode(LEDGW, OUTPUT);
                     digitalWrite(LEDGW, HIGH);
                       delay(5000);
                       digitalWrite(LEDGN, LOW);
                         continue;
                  
                  
                  }

                   else if(analogRead(A2)==voltageS )

                {
                  
                  pinMode(LEDGS, OUTPUT);
                   digitalWrite(LEDGS, HIGH);
                    delay(5000);
                    digitalWrite(LEDGN, LOW);
                     continue;
                  }



                  else if(analogRead(A3)==voltageE )

                {
                  
                     pinMode(LEDGE, OUTPUT);
                      digitalWrite(LEDGE, HIGH);
                       delay(5000);
                       digitalWrite(LEDGN, LOW);
                       continue;
                  
                  }


                    else 
                    {
                    continue;

                        }


      delay(1000);


      
 }
 
 
      digitalWrite(LEDRN, LOW);
      
   
 
 }
 
 
 delay(50);
}*/




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




int maximumRange = 60; 
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
      
      //lcd.display();
    //lcd.println(distance);
      //delay(1000);
      //lcd.noDisplay();
      
 
 if ((distanceN >= maximumRange || distanceN <= minimumRange ) && (distanceW >= maximumRange || distanceW <= minimumRange)  && (distanceS >= maximumRange || distanceS <= minimumRange)  && (distanceE >= maximumRange || distanceE <= minimumRange))
 {


 
  //    Serial.println("RED");
  //    lcd.println("RED");
      delay(1000);
      
      //lcd.noDisplay();
       pinMode(LEDGN, OUTPUT);
       digitalWrite(LEDGN, HIGH);



       pinMode(LEDGW, OUTPUT);
       digitalWrite(LEDGW, HIGH);




       pinMode(LEDGS, OUTPUT);
       digitalWrite(LEDGS, HIGH);


       pinMode(LEDGE, OUTPUT);
       digitalWrite(LEDGE, HIGH);
       
       
     


 
 }
 
 else 
 
 {

 
     
     digitalWrite(LEDGN, LOW);
      digitalWrite(LEDGW, LOW);
       digitalWrite(LEDGS, LOW); 
        digitalWrite(LEDGE, LOW);
      //Serial.println(distance);
       
       delay(50);


     
       

      //Serial.println("YELLOW");
       //lcd.println(" YELLOW");
       //delay(1000);
        // lcd.noDisplay();
       pinMode(LEDYN, OUTPUT);
       digitalWrite(LEDYN, HIGH);
       delay(2000);
       digitalWrite(LEDYN , LOW);




        pinMode(LEDYW, OUTPUT);
       digitalWrite(LEDYW, HIGH);
       delay(2000);
       digitalWrite(LEDYW , LOW);



       pinMode(LEDYS, OUTPUT);
       digitalWrite(LEDYS, HIGH);
       delay(2000);
       digitalWrite(LEDYS , LOW);


       pinMode(LEDYE, OUTPUT);
       digitalWrite(LEDYE, HIGH);
       delay(2000);
       digitalWrite(LEDYE , LOW);


       
     

       while(distanceN < maximumRange && distanceN > minimumRange)
       {
         pinMode(LEDRN, OUTPUT);
      digitalWrite(LEDRN, HIGH);
      delay(1000);
      digitalWrite(LEDRN, LOW);
       pinMode(LEDGN, OUTPUT);
           digitalWrite(LEDGN, HIGH);
              delay(5000);
              digitalWrite(LEDGN, LOW);
              digitalWrite(LEDRN, HIGH);
              
             //while((distanceW >= maximumRange || distanceW <= minimumRange)  && (distanceS >= maximumRange || distanceS <= minimumRange)  && (distanceE >= maximumRange || distanceE <= minimumRange))
             if(distanceE>=maximumRange && distanceE<= minimumRange)
             {
               pinMode(LEDRS, OUTPUT);
      digitalWrite(LEDRS, HIGH);
      delay(1000);
      digitalWrite(LEDRS, LOW);
       pinMode(LEDGS , OUTPUT);
           digitalWrite(LEDGS, HIGH);
              delay(5000);
              digitalWrite(LEDGS, LOW);
              digitalWrite(LEDRS, HIGH);
              delay(2000);

               pinMode(LEDRE, OUTPUT);
      digitalWrite(LEDRE, HIGH);
      delay(1000);
      digitalWrite(LEDRE, LOW);
       pinMode(LEDGE, OUTPUT);
           digitalWrite(LEDGE, HIGH);
              delay(5000);
              digitalWrite(LEDGE, LOW);
              digitalWrite(LEDRE, HIGH);
          break;
            
             }
              break;
      
        }
        while(distanceW < maximumRange && distanceW > minimumRange )
        
        {
           pinMode(LEDRW, OUTPUT);
      digitalWrite(LEDRW, HIGH);
      delay(1000);
      digitalWrite(LEDRW, LOW);
       pinMode(LEDGW , OUTPUT);
           digitalWrite(LEDGW, HIGH);
              delay(5000);
              digitalWrite(LEDGW, LOW);
              digitalWrite(LEDRW, HIGH);
              break;
          
          }
           while(distanceS < maximumRange && distanceS > minimumRange )
        
        {
           pinMode(LEDRS, OUTPUT);
      digitalWrite(LEDRS, HIGH);
      delay(1000);
      digitalWrite(LEDRS, LOW);
       pinMode(LEDGS , OUTPUT);
           digitalWrite(LEDGS, HIGH);
              delay(5000);
              digitalWrite(LEDGS, LOW);
              digitalWrite(LEDRS, HIGH);
              break;
              
          
          }
           while(distanceE < maximumRange && distanceE > minimumRange )
        
        {
           pinMode(LEDRE, OUTPUT);
      digitalWrite(LEDRE, HIGH);
      delay(1000);
      digitalWrite(LEDRE, LOW);
       pinMode(LEDGE, OUTPUT);
           digitalWrite(LEDGE, HIGH);
              delay(5000);
              digitalWrite(LEDGE, LOW);
              digitalWrite(LEDRE, HIGH);
          break;
          }


 while((distanceN < maximumRange && distanceN > minimumRange) && (distanceW < maximumRange && distanceW > minimumRange )&& (distanceS < maximumRange && distanceS > minimumRange) && (distanceE < maximumRange && distanceE > minimumRange) )
 {
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


                    

      delay(1000);


      
 }
 
 
      
   
 
 }
 
 
 delay(50);
}
