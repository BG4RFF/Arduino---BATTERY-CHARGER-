void Button_Click()
{  
    
    //if (myTouch.dataAvailable())
    //{
      myTouch.read();
      x = myTouch.getX();
      y = myTouch.getY();
      
     Serial.print(x);
     Serial.print("\n");
     Serial.print(y);
     Serial.print("\n");
      
      if ((y<=236) && (y>=209))  
      {
        if ((x>=54) && (x<=104))  // Button: 1
        {
  
      waitForIt(235, 55,210, 103);
     Serial.print(F("Manual ON"));
     Serial.print(F("\n"));
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(1000);
      myGLCD.setColor(255,0,0);   
      myGLCD.setFont (BigFont);
      myGLCD.print("MANUAL ON", CENTER, 170);
      delay(2000);
   
  digitalWrite(RL1, LOW);      //desmarcar para correr versao final
  delay(1000);
  digitalWrite(RL2, LOW);        
          }
        }     
      
      if ((y <= 236) && (y >= 209))
      {
        if ((x >= 216) && (x <= 266))  // Button: 2
        {
     waitForIt(235,217,210,265); 
     Serial.print(F("Manual OFF"));
     Serial.print(F("\n"));
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(1000);
      myGLCD.setColor(255,0,0);   
      myGLCD.setFont (BigFont);
      myGLCD.print("MANUAL OFF", CENTER, 170);
      delay(2000);
  digitalWrite(RL2, HIGH);      //desmarcar para correr versap final
  delay(1000);
  digitalWrite(RL1, HIGH);
  
    
    state = 0; }
   
   }
 // } 
 
 }
 




