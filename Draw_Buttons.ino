void drawButtons()
{
/// ALTERAR OS BUTÃƒÆ’Ã¢â‚¬Â¢ES PARA O CARREGADOR DE BATERIAS

 //--- Display botao ON
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.drawRoundRect(54,236,104,209);
 myGLCD.setColor(255, 255, 0);
 myGLCD.setFont (SmallFont);
 myGLCD.print("MN.ON", 60,218);
 
   //--- Display OFF
 myGLCD.setColor(255, 255, 255);                    //branco 
 myGLCD.drawRoundRect(216,236,266,209);
 myGLCD.setColor(255, 255, 0);
 myGLCD.setFont (SmallFont);
 myGLCD.print("OFF", 230,218);
 }
 



