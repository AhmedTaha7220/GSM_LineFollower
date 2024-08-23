void screen (int c){
 //lcd.clear();
 lcd.setCursor(2,0);
  lcd.print("Fire is in ");
  if(c==0)return;
  else{
    lcd.setCursor(c,1);
    lcd.print(c);
  }
}
