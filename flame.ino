int flame(int f){
  int deg = digitalRead(f);
  if (deg==1)return 1;
  else return 0;
}
