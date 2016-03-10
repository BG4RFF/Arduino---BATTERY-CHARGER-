
void Values_Print() {
  
  DateTime now = RTC.now();
  
  ///--- data
   myGLCD.setFont (SmallFont);
   myGLCD.setColor(255,255,255);
   myGLCD.printNumI(now.day(), 55, 218);
   myGLCD.print("/", 75, 218);
   myGLCD.printNumI(now.month(), 85, 218);
   myGLCD.print("/", 100, 218);
   myGLCD.printNumI(now.year(), 110, 218);
   
    ///--- HORA
   myGLCD.setFont (SmallFont);
   myGLCD.setColor(255,255,255);
   myGLCD.printNumI(now.hour(), 190, 218);
   myGLCD.print(":", 210, 218);
   myGLCD.printNumI(now.minute(), 220, 218);
   myGLCD.print(":", 240, 218);
   myGLCD.printNumI(now.second(), 250, 218);  
//--------------------------------------------------------------------------  
  //Grafico bateria - Fill grafico     PRENCHER OS OUTROS QUADRADOS A PRETO
 if(valBatt < 5) {
   
   myGLCD.setColor(0,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(0,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(0,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);   
   myGLCD.setColor(0,0 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(0,0 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(0,0 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}    
 
 
 if(valBatt >= 5 && valBatt < 11.5) {
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(0,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);   
   myGLCD.setColor(0,0 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(0,0 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(0,0 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}    
 
 if(valBatt < 12.1 && valBatt >= 11.5) {
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(255, 198,20,180);
   myGLCD.setColor(0,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);   
   myGLCD.setColor(0,0 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(0,0 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(0,0 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //verde
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}    
   
   if(valBatt >=12.1 && valBatt <12.2) {
      myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141); 
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}    
   
   if(valBatt >=12.2 && valBatt <12.3){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}    
  
   if(valBatt >=12.3 && valBatt <12.4){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101); 
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}   
  
   if(valBatt >=12.4 && valBatt <12.5){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}
  
   if(valBatt >=12.5 && valBatt <12.6){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2, 99,20,81);   
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}
  
   if(valBatt >=12.6 && valBatt <12.7){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}
  
   if(valBatt >=12.7 && valBatt <12.8){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(2,40,20,22);}
  
   if(valBatt >=12.8 ){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 218, 20,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(2, 198,20,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(2, 178,20,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 159,20,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(2, 139,20,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(2, 119,20,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2, 99,20,81);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2,79,20,62);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(2, 60,20,42);
   myGLCD.setColor(0,255 , 0);
   myGLCD.fillRect(2,40,20,22);}               //verde
   
  
  //--------------------------------------------------------------------------------- 
  //Grafico CARREGADOR - Fill grafico
   if(valBatt1 < 12.0){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 218, 318,200);
   myGLCD.setColor(0,0 , 0);                       //Restantes a preto
   myGLCD.fillRect(300, 198,318,180);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(300, 178,318,161);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(300, 159,318,141);
   myGLCD.setColor(0,0 , 0);                       //Restantes a preto
   myGLCD.fillRect(300, 139,318,121);
   myGLCD.setColor(0,0 , 0);                     //Restantes a preto
   myGLCD.fillRect(300, 119,318,101);
   myGLCD.setColor(0,0 , 0);          //Restantes a preto
   myGLCD.fillRect(300, 99,318,81);
   myGLCD.setColor(0,0 , 0);                  //Restantes a preto
   myGLCD.fillRect(300,79,318,62);
   myGLCD.setColor(0,0 , 0);                 
   myGLCD.fillRect(300, 60,318,42);                   //Restantes a preto
   myGLCD.setColor(0,0 , 0); 
   myGLCD.fillRect(300,40,318,22);}                 //Restantes a preto
      
   if(valBatt1 >=12.0 && valBatt1 <13.0){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 218, 318,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(300, 198,318,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 178,318,161);
   myGLCD.setColor(0,0 , 0);                      //Restantes a preto
   myGLCD.fillRect(300, 159,318,141);
   myGLCD.setColor(0,0 , 0);                       //Restantes a preto
   myGLCD.fillRect(300, 139,318,121);
   myGLCD.setColor(0,0 , 0);                       //Restantes a preto
   myGLCD.fillRect(300, 119,318,101);
   myGLCD.setColor(0,0 , 0);                        //Restantes a preto
   myGLCD.fillRect(300, 99,318,81);
   myGLCD.setColor(0,0 , 0);                        //Restantes a preto
   myGLCD.fillRect(300,79,318,62);
   myGLCD.setColor(0,0 , 0);                 
   myGLCD.fillRect(300, 60,318,42);                   //Restantes a preto
   myGLCD.setColor(0,0 , 0); 
   myGLCD.fillRect(300,40,318,22);}      
  
   if(valBatt1 >=13.0 && valBatt1 <14.0){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 218, 318,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(300, 198,318,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 178,318,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 159,318,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 139,318,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(300, 119,318,101);
   myGLCD.setColor(0,0 , 0);                        //Restantes a preto
   myGLCD.fillRect(300, 99,318,81);
   myGLCD.setColor(0,0 , 0);                        //Restantes a preto
   myGLCD.fillRect(300,79,318,62);
   myGLCD.setColor(0,0 , 0);                 
   myGLCD.fillRect(300, 60,318,42);                   //Restantes a preto
   myGLCD.setColor(0,0 , 0); 
   myGLCD.fillRect(300,40,318,22);}   
  
   if(valBatt1 >=14.0 && valBatt1 <14.1){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 218, 318,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(300, 198,318,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 178,318,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 159,318,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 139,318,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(300, 119,318,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300, 99,318,81);
   myGLCD.setColor(0,0 , 0);                        //Restantes a preto
   myGLCD.fillRect(300,79,318,62);
   myGLCD.setColor(0,0 , 0);                 
   myGLCD.fillRect(300, 60,318,42);                   //Restantes a preto
   myGLCD.setColor(0,0 , 0); 
   myGLCD.fillRect(300,40,318,22);}   
  
   if(valBatt1 >=14.1 && valBatt1 <14.2){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 218, 318,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(300, 198,318,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 178,318,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 159,318,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 139,318,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(300, 119,318,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300, 99,318,81);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300,79,318,62);}
  
   if(valBatt1 >=14.3 && valBatt1 <14.5){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 218, 318,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(300, 198,318,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 178,318,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 159,318,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 139,318,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(300, 119,318,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300, 99,318,81);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300,79,318,62);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300,60,318,42);
   myGLCD.setColor(0,0 , 0); 
   myGLCD.fillRect(300,40,318,22);}   
   
   if(valBatt1 >=14.5){
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 218, 318,200);
   myGLCD.setColor(255,0 , 0);                       //vermelho
   myGLCD.fillRect(300, 198,318,180);
   myGLCD.setColor(255,0 , 0);                      //vermelho
   myGLCD.fillRect(300, 178,318,161);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 159,318,141);
   myGLCD.setColor(255,255 , 0);                      //Amarelo
   myGLCD.fillRect(300, 139,318,121);
   myGLCD.setColor(255,255 , 0);                      //amarelo
   myGLCD.fillRect(300, 119,318,101);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300, 99,318,81);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300,79,318,62);
   myGLCD.setColor(0,255 , 0);                      //verde
   myGLCD.fillRect(300, 60,318,42);
   myGLCD.setColor(0,255 , 0);
   myGLCD.fillRect(300,40,318,22);}               //verde
   
 //-------------------------------------------------------------------------
 //VOLTAGEM BATERIA
   if(state == 0 || state == 3 || state == 4 || state == 6 ) {
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(33,70,159,22);            
   myGLCD.setColor(255, 255, 255);        
   myGLCD.drawLine(160,29,160,63);
   myGLCD.setColor(255,255,255);
   myGLCD.setFont (BigFont);
   myGLCD.printNumF(valBatt,1 , 40, 40);
   myGLCD.print(" V", 100, 40);
   } 
   else if (state == 2 || state == 5 || state == 7 ) {
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(33,70,159,22);          
   myGLCD.setColor(255, 255, 255);        
   myGLCD.drawLine(160,29,160,63);
   myGLCD.setColor(255,0,0);
   myGLCD.setFont (BigFont);
   myGLCD.printNumF(valBatt,1 , 40, 40);
   myGLCD.print(" V", 100, 40);
   }
        
   //AMPERAGEM BATERIA
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(162,22,287,63);            
   myGLCD.setColor(255, 255, 255);        
   myGLCD.drawLine(160,29,160,63);
   myGLCD.setColor(255,255,255);
   myGLCD.setFont (BigFont);
   myGLCD.printNumF(valCGHamp,1 , 175, 40);
   myGLCD.print(" A", 240, 40); 
 
   if(valBatt >= 12.6) {
   myGLCD.setFont (SmallFont);
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(1,236,52,224 );
   myGLCD.setColor(0, 255, 0);  
   myGLCD.print("GOOD", 3, 225); }
 
   if (valBatt <12.6) {
   myGLCD.setFont (SmallFont);
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(1,236,52,224 );
   myGLCD.setColor(255, 0, 0);
   myGLCD.print("CHARGE", 3, 225); }
 
   if(valBatt < 12.1) {
   myGLCD.setFont (SmallFont);
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(1,236,52,224 );
   myGLCD.setColor(255, 0, 0);  
   myGLCD.print("BAD",3, 225); }
  
    //VOLTAGEM CARREGADOR
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(33,141,158,100);
   myGLCD.setColor(255, 255, 255);  
   myGLCD.drawLine(160,134,160,100);
   myGLCD.setColor(255,255,255);
   myGLCD.setFont (BigFont);
   myGLCD.printNumF(valBatt1,1, 40, 110);
   myGLCD.print(" V", 100, 110); 
   
     //AMPERAGEM CARREGADOR
   myGLCD.setColor(0, 0, 0); 
   myGLCD.fillRect(161,134,287,93);
   myGLCD.setColor(255, 255, 255);  
   myGLCD.drawLine(160,134,160,100);
   myGLCD.setColor(255,255,255);
   myGLCD.setFont (BigFont);
   myGLCD.printNumF(valCGHamp,1, 175, 110);
   myGLCD.print(" A", 240, 110); 
   
   /*
   ///LAST EVENT " lcd.print (EEPROM.read(100)); "
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      delay(500);  
      myGLCD.setFont (BigFont);
      myGLCD.setColor(255, 255, 255);      
      myGLCD.print("LAST EVENT:", 45, 170);
      delay(1000);
      myGLCD.setColor(0,0,0);                    
      myGLCD.fillRect(34,198,286,152);
      myGLCD.setColor(255, 255, 255); 
      myGLCD.printNumF(EEPROM.read(100), 45, 170);
      myGLCD.print("/", 60, 170);
      myGLCD.printNumF(EEPROM.read(110), 75, 170);
      myGLCD.print("  ", 90, 170);
      myGLCD.printNumF(EEPROM.read(120), 105, 170);
      myGLCD.print(":", 120, 170);
      myGLCD.printNumF(EEPROM.read(130), 135, 170);
      myGLCD.print(":", 150, 170);
      myGLCD.printNumF(EEPROM.read(140), 165, 170);
      
      delay(1000); */ 
   
 
  }



