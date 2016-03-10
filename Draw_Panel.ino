void Draw_Panel() {

 myGLCD.setBackColor(0, 0, 0);                      //preto
 
 ///--- Grafico bateria - Rectangulo
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.drawRect(1, 21, 21, 220);  //10 quadrados de 20 larg por 20 alt
 
 //--- Legenda Bateria
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.setColor(126,188,209);
 myGLCD.setFont (SmallFont);
 myGLCD.print("BAT", 1, 6);
 
 //--- Grafico Carregador - Rectangulo
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.drawRect(299, 21, 319, 219); 

//--- Legenda carregador
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.setColor(126,188,209);
 myGLCD.setFont (SmallFont);
 myGLCD.print("CHG", 295, 6);

//--- DISPLAY GRANDE VOLTAGEM BATERIA
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.drawRoundRect(32,71,288,21);
 myGLCD.drawLine(160,29,160,63);
 
 //--- Legenda Bateria
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.setColor(126,188,209);
 myGLCD.setFont (SmallFont);
 myGLCD.print("VOLTAGEM / AMP. BATERIA", CENTER, 6);
 
 //--- DISPLAY GRANDE VOLTAGEM CARREGADOR
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.drawRoundRect(32,142,288,92);
 myGLCD.drawLine(160,134,160,100);
 
 //--- Legenda carregador
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.setColor(126,188,209);
 myGLCD.setFont (SmallFont);
 myGLCD.print("VOLTAGEM / AMP. CARREGADOR",CENTER , 76);
 
 //--- DISPLAY GRANDE MENSAGEM
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.drawRoundRect(32,200,288,150);
 
}



