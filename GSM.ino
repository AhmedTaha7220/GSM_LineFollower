
void ring(){
  //s.println("ATD+201274718928;");
  s.println("ATD+201210649832;");
}
void message(int c){
  s.println("AT+CMGF=1");
  delay(500);
  s.println("AT+CMGF=\"+201274718928\"\r");
  delay(500);
  s.println("There's "+c);
  delay(500);
  s.println((char)26);
  delay(500);
}
