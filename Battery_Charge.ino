void BattCharge() {

  battLevel1 = analogRead( BATT_PIN );
  delay(10);
  battLevel2 = analogRead( BATT_PIN );
  delay(10);
  battLevel3 = analogRead( BATT_PIN );
  delay(10);
  battLevel4 = analogRead( BATT_PIN );
  delay(10);
  battLevel5 = analogRead( BATT_PIN );
  delay(10);
  battLevel6 = analogRead( BATT_PIN );
  delay(10); 
  battLevel7 = analogRead( BATT_PIN );
  delay(10);
  battLevel8 = analogRead( BATT_PIN );
  delay(10);
  battLevel9 = analogRead( BATT_PIN );
  delay(10);
  battLevel10 = analogRead( BATT_PIN );
  
  
  battLevel = ((battLevel1 + battLevel2 + battLevel3 + battLevel4 + battLevel5 + battLevel6 + battLevel7 + battLevel8 + battLevel9 + battLevel10)/10);
  valBatt = (battLevel * 0.0048631476050831)/0.1915;   //0.0048631476050831  -  0.199
  delay(10);
  
/// --- BATTERY DISCONECCTED      
      if(valBatt >= 0 && valBatt <=5 ){ //&& state!=3 && state != 4 && state != 5 && state != 6){
      state = 2;
      delay(500);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);
      myGLCD.setColor(255,0,0);   
      myGLCD.setFont (BigFont);
      myGLCD.print("CONNECT BATT.", CENTER, 170);
      delay(500);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);
      myGLCD.setColor(255,0,0);   
      myGLCD.setFont (BigFont);
      myGLCD.print("CONNECT BATT.", CENTER, 170);  
      digitalWrite(RL1, LOW);
      digitalWrite(RL2, HIGH);
      
  battLevel1 = analogRead( BATT_PIN );
  delay(10);
  battLevel2 = analogRead( BATT_PIN );
  delay(10);
  battLevel3 = analogRead( BATT_PIN );
  delay(10);
  battLevel4 = analogRead( BATT_PIN );
  delay(10);
  battLevel5 = analogRead( BATT_PIN );
  delay(10);
  battLevel6 = analogRead( BATT_PIN );
  delay(10); 
  battLevel7 = analogRead( BATT_PIN );
  delay(10);
  battLevel8 = analogRead( BATT_PIN );
  delay(10);
  battLevel9 = analogRead( BATT_PIN );
  delay(10);
  battLevel10 = analogRead( BATT_PIN );
  
  battLevel = ((battLevel1 + battLevel2 + battLevel3 + battLevel4 + battLevel5 + battLevel6 + battLevel7 + battLevel8 + battLevel9 + battLevel10)/10);
  valBatt = (battLevel * 0.0048631476050831)/0.1915;   //0.0048631476050831  -  0.199
            
      if(valBatt <= 5) {
         valBatt = 0.0;
         myGLCD.setColor(0, 0, 0); 
         myGLCD.fillRect(33,70,159,22);          
         myGLCD.setColor(255, 255, 255);        
         myGLCD.drawLine(160,29,160,63);
         myGLCD.setColor(255,0,0);
         myGLCD.setFont (BigFont);
         myGLCD.printNumF(valBatt,1 , 40, 40);
         myGLCD.print(" V", 100, 40); 
            }
      
      if(valBatt >= 11.5 && valBatt <12.6 ) {
        state = 10;
        currentMillisWait = 0;
        currentMillisCharge = 0; } 
      
      if (valBatt >= 12.6) {
        state = 0;
        currentMillisCharge = millis();
        }
    } 
        
        ///--- BATTERY DEAD
      if(valBatt >= 10 && valBatt < 11.50 && state != 4) {
      state = 5;
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);
      myGLCD.setColor(255,0,0);   
      myGLCD.setFont (BigFont);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      myGLCD.print("BATTERY DEAD",CENTER,170);
      delay(500);  
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);  
      myGLCD.setColor(255,0,0);
      myGLCD.setFont (BigFont);
      myGLCD.print("BATTERY DEAD",CENTER,170);
      delay(500);      
      digitalWrite(RL2, HIGH);
      digitalWrite(RL1, HIGH);
          }
      delay(10); 
      
  ///--- DAILY CHARGE
    if (h>=7 && h<=8) {
      txstate == 1 ;
      
      DateTime now = RTC.now(); 
      EEPROM.write(100, now.day()); 
      EEPROM.write(110, now.month()); 
      EEPROM.write(130, now.hour());
      EEPROM.write(140, now.minute());
      
      digitalWrite(RL1, LOW);     
      delay(500);
      digitalWrite(RL2, LOW);
      
      if (txstate == 1 ) {
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);
      myGLCD.setFont (BigFont);
      myGLCD.setColor(0,0,255);   
      myGLCD.print("CHARGING BAT.", CENTER, 170);
      delay(1000);}
      } else { txstate == 0;} 
      
   
  ///--- VOLTAGE GOOD          
      if (valBatt >= 12.6 && state != 4 && state != 6){
      state = 3;   
      myGLCD.setColor(0, 255, 0); 
      myGLCD.setFont (BigFont);
      myGLCD.print("VOLTAGE GOOD!", CENTER, 170);
      delay(500);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);
      myGLCD.setColor(0, 255, 0); 
      myGLCD.setFont (BigFont);
      myGLCD.print("VOLTAGE GOOD!", CENTER, 170);
      delay(500);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);
      digitalWrite(RL2, HIGH);  
      digitalWrite(RL1, HIGH);
      
  battLevel1 = analogRead( BATT_PIN );
  delay(10);
  battLevel2 = analogRead( BATT_PIN );
  delay(10);
  battLevel3 = analogRead( BATT_PIN );
  delay(10);
  battLevel4 = analogRead( BATT_PIN );
  delay(10);
  battLevel5 = analogRead( BATT_PIN );
  delay(10);
  battLevel6 = analogRead( BATT_PIN );
  delay(10); 
  battLevel7 = analogRead( BATT_PIN );
  delay(10);
  battLevel8 = analogRead( BATT_PIN );
  delay(10);
  battLevel9 = analogRead( BATT_PIN );
  delay(10);
  battLevel10 = analogRead( BATT_PIN );
  
  battLevel = ((battLevel1 + battLevel2 + battLevel3 + battLevel4 + battLevel5 + battLevel6 + battLevel7 + battLevel8 + battLevel9 + battLevel10)/10);
  valBatt = (battLevel * 0.0048631476050831)/0.1915;   //0.0048631476050831  -  0.199
 
      
          if (valBatt >= 12.6) { 
            currentMillisCharge = millis();} 
          if (valBatt < 12.6){
            currentMillisCharge = 0;
            state = 10;}  
        }  
      delay(10);
      
      ///--- CHARGING BATTERY
      if(valBatt >= 11.50 && currentMillisCharge == 0 && state == 10 ){
      state = 4;
      txstate = 1;
      
      DateTime now = RTC.now(); 
      EEPROM.write(100, now.day()); 
      EEPROM.write(110, now.month()); 
      EEPROM.write(130, now.hour());
      EEPROM.write(140, now.minute());
      
      digitalWrite(RL1, LOW);     
      delay(500);
      digitalWrite(RL2, LOW);
      currentMillisCharge = millis(); }
      
      if (txstate == 1 ) {
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);
      myGLCD.setFont (BigFont);
      myGLCD.setColor(0,0,255);   
      myGLCD.print("CHARGING BAT.", CENTER, 170);
      delay(1000);
     
     ///LAST EVENT " lcd.print (EEPROM.read(100)); "
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);  
      myGLCD.setFont (BigFont);
      myGLCD.setColor(255, 255, 255);      
      myGLCD.print("STARTED AT:", CENTER, 170);
      delay(1000);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      myGLCD.setColor(255, 255, 255); 
      d = EEPROM.read(100);
      m = EEPROM.read(110);
      h = EEPROM.read(130);
      mn = EEPROM.read(140);
      myGLCD.printNumI(d, 45, 170);
      myGLCD.print("/", 75, 170);
      myGLCD.printNumI(m, 90, 170);
      myGLCD.printNumI(h, 150, 170);
      myGLCD.print(":", 180, 170);
      myGLCD.printNumI(mn, 195, 170);
      delay(2000); 
         }
      
      ///--- FINISH CHARGE BATTERIE
      if(valBatt >= 11.50 && currentMillisCharge + 60000 <= millis() && state == 4 && state != 3 ){          //2 minutos      
      currentMillisWait = 0; 
      state = 4;
      digitalWrite(RL2, HIGH);      
      digitalWrite(RL1, HIGH);
        }
           
      ///--- WAITTING
      if(currentMillisWait == 0 && currentMillisCharge +  60000 <= millis() && state == 4 && state != 3 && state != 6 ){//&& state != 1 && state !=2 && state != 3 && state != 5 && state != 6 ) {
      state = 6;
      txstate = 2;
      currentMillisWait = millis();
      digitalWrite(RL2, HIGH);
      digitalWrite(RL1, HIGH); 
      
      DateTime now = RTC.now(); 
      EEPROM.write(100, now.day()); 
      EEPROM.write(110, now.month()); 
      EEPROM.write(130, now.hour());
      EEPROM.write(140, now.minute()); 
      delay(50); }  
      
      if (txstate == 2) {
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);  
      myGLCD.setFont (BigFont);
      myGLCD.setColor(255, 255, 255);      
      myGLCD.print("WAITTING 60`", CENTER, 170);
      delay(1000);
      ///LAST EVENT " lcd.print (EEPROM.read(100)); "
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);  
      myGLCD.setFont (BigFont);
      myGLCD.setColor(255, 255, 255);      
      myGLCD.print("STARTED AT:", CENTER, 170);
      delay(1000);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      myGLCD.setColor(255, 255, 255); 
      d = EEPROM.read(100);
      m = EEPROM.read(110);
      h = EEPROM.read(130);
      mn = EEPROM.read(140);
      myGLCD.printNumI(d, 45, 170);
      myGLCD.print("/", 75, 170);
      myGLCD.printNumI(m, 90, 170);
      myGLCD.printNumI(h, 150, 170);
      myGLCD.print(":", 180, 170);
      myGLCD.printNumI(mn, 195, 170);
      delay(2000); 
         }
      
      ///--- FINISHED WAITTING
      if(currentMillisWait + 3600000 < millis() && state == 6 && state != 3) { //1800000 - 30 minutos
      //state = 6;
      digitalWrite(RL2, HIGH);
      digitalWrite(RL1, HIGH);   
      
  battLevel1 = analogRead( BATT_PIN );
  delay(10);
  battLevel2 = analogRead( BATT_PIN );
  delay(10);
  battLevel3 = analogRead( BATT_PIN );
  delay(10);
  battLevel4 = analogRead( BATT_PIN );
  delay(10);
  battLevel5 = analogRead( BATT_PIN );
  delay(10);
  battLevel6 = analogRead( BATT_PIN );
  delay(10); 
  battLevel7 = analogRead( BATT_PIN );
  delay(10);
  battLevel8 = analogRead( BATT_PIN );
  delay(10);
  battLevel9 = analogRead( BATT_PIN );
  delay(10);
  battLevel10 = analogRead( BATT_PIN );
  
  battLevel = ((battLevel1 + battLevel2 + battLevel3 + battLevel4 + battLevel5 + battLevel6 + battLevel7 + battLevel8 + battLevel9 + battLevel10)/10);
  valBatt = (battLevel * 0.0048631476050831)/0.1915;   //0.0048631476050831  -  0.199
            
      if(valBatt <12.6 ) {
        state = 10;
        currentMillisWait = 0;
        currentMillisCharge = 0;  } 
      if (valBatt >= 12.6) {
        state = 0;
        currentMillisCharge = millis();
        } 
     } 
             
      delay(10);
      
      ///--- HIGH VOLTAGE
      if (valBatt >= 15 && state != 4) {
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);  
      myGLCD.setFont (BigFont);
      myGLCD.setColor(255, 0, 0);      
      myGLCD.print("*HIGH VOLTAGE*", 45, 170);
      delay(500);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      myGLCD.setColor(255, 0, 0); 
      myGLCD.print("*HIGH VOLTAGE*", 45, 170);
      delay(500);
      digitalWrite(RL2, HIGH);
      delay(500);
      digitalWrite(RL1, HIGH);     
          }
      delay(10);   
  
}



