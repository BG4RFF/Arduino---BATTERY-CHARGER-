// Battery Monitor
//CALIBRAR VALORES DA BATERIA - 604= DISCHARGED0% -  870 cHARGED 100%

void BATTMON_Update()
{
  
  battLevel = analogRead( BATT_PIN );
  valBatt = (battLevel * 0.0048631476050831)/0.199;   //0.0048631476050831  -  0.199
   
     if (state == 4) {    
    digitalWrite(RL2, HIGH); }
  
  
  valBattPerc = 0+((100-0)/(12.7-11.95))*(valBatt-11.95) ; // interpolaÃƒÆ’Ã‚Â§ÃƒÆ’Ã‚Â£o linear - Y=% e X=v
  
  if (valBatt <=11.95 ) {
      valBattPerc = 0;
    }
    
  if (valBatt >12.7 ) {
      valBattPerc = 100;
    }
                                                          // valBattPerc = Y0 + (Ymax-Ymin/Xmax-Xmin)*(X - Xmin)
                                                           // valBattPerc = 0 + (100/12,7-11,94)*(valBatt - 11,94)                                                       
 /// AMP READER
 /*
 for (int a = 0; a < 10; a++){ // run through loop 10x

  // read the analog in value:
  sensorValue = analogRead(ACS712);  
  sampleAmpVal = sampleAmpVal + sensorValue;       // add samples together
}

valACS = sampleAmpVal / 10;

  // convert to milli amps
  valCGHamp = (((long)valACS * 5000 / 1024) - 500 ) * 1000 / 133; 
  // convert to amps
  valCGHamp = valCGHamp / 1000; 
  valCGHamp = 0;
*/

}



