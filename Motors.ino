 AF_DCMotor m1(3);
 AF_DCMotor m2(4);
 void react();
 void Motors (char d){
  switch(d){
    case 'f': m1.setSpeed(200);
              m1.run(FORWARD);
              m2.setSpeed(230);
              m2.run(FORWARD);
              break;
    case 'r': m1.setSpeed(50);
              m1.run(RELEASE);
              m2.setSpeed(200);
              m2.run(FORWARD);
              break;                                 
    case 'l': m1.setSpeed(200);
              m1.run(FORWARD);
              m2.setSpeed(50);
              m2.run(RELEASE);
              break; 
    case 's':     m1.setSpeed(0);
                  m1.run(RELEASE);
                  m2.setSpeed(0);
                  m2.run(RELEASE);
                  counter++;
                  react(counter);
                 delay(2000);
                  m1.setSpeed(200);
                  m1.run(FORWARD);
                  m2.setSpeed(230);
                  m2.run(FORWARD);
                  delay(700);                
             
              break;                 
    case 'b': m1.setSpeed(200);
              m1.run(BACKWARD);
              m2.setSpeed(200);
              m2.run(BACKWARD);
              break;                              
  }
 }
