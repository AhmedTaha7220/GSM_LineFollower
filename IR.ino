char IR(int s1,int s2,int s3,int s4, int s5){
  if (s1==1 && s2==1 && s4==1 && s5==1) return 'f';
  else if (s1==1 && s2==0 && s3==1 && s4==1  ||  s1==0 && s2==1 && s4==1 && s5==1 || s1==0 && s2==0 && s4==1 && s5==1) return 'l';
  else if (s1==1 && s2==1 && s4==1 && s5==0  ||  s1==1 && s2==1 && s4==0 && s5==1 || s1==1 && s2==1 && s4==0 && s5==0) return 'r';
  else if (s1==0 && s2==0 && s4==0 && s5==0  ||  s1==0 && s2==0 && s4==0 && s5==1 || s1==1 && s2==0 && s4==0 && s5==0 ) return 's'; 
}
