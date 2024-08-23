  void react(int counter){
  //flame reading
  int f = digitalRead(flam);

  //fire reaction (buzzer, LCD, GSM)
  if(f==LOW){
    ring();
  
    //First buzzer
    tone(buz,700,1000);
    delay(1000);
    noTone(buz);
    //Second LCD
    screen(counter);
    //gsm
    
    delay(4000);
  }}
