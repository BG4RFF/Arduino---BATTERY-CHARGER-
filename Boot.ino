void LCD_boot(){
  
// Clear the screen and draw the frame
  myGLCD.clrScr();
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(0, 0, 0);                      //preto                 
  
  myGLCD.setColor(126,188,209);                      //azul claro
  myGLCD.print("BOOTING ...", 5, 110);
  delay(250);
  myGLCD.print("BOOTING .......", 5, 110);
  delay(250);
  myGLCD.print("BOOTING ............", 5, 110);
  delay (500);
  
  myGLCD.clrScr();
  myGLCD.setColor(255, 255, 255);                    //branco
  myGLCD.drawRect(0,0,319,239);  
  myGLCD.print("ARDUCHARGER V5.5.2", CENTER, 110);  //center,100
  Serial.print(F("ARDUCHARGER V5.5.2"));  
  delay (2000);
  myGLCD.clrScr();
  
  }



