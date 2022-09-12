#include <Servo.h>

Servo myServo;

String readString;
char alp;

const int DIR = 9;
const int STEP = 8;
const int DIR2 = 11;
const int STEP2 = 10;
const int  steps_per_rev = 600;
const int delayno = 640;



//--------------------------------------------------------------------------------
int distanceToSteps(float distance){
  int newstep = distance * 25;
  return newstep;
}



//--------------------------------------------------------------------------------
//function to  move x motor
int xmove(int distance){
 float stepnumber = 0.6 * distanceToSteps(distance);
  if(stepnumber >= 0){
     digitalWrite(DIR, LOW);
  
  
  for(int i = 0; i<stepnumber; i++)
  {
    digitalWrite(STEP, HIGH);
    delayMicroseconds(delayno);
    digitalWrite(STEP, LOW);
    delayMicroseconds(delayno);
  }
 delay(100);
 }
 else{
   digitalWrite(DIR, HIGH);
  

  for(int i = 0; i>stepnumber; i--)
  {
    digitalWrite(STEP, HIGH);
    delayMicroseconds(delayno);
    digitalWrite(STEP, LOW);
    delayMicroseconds(delayno);
  }
   delay(100);
 }
}





//--------------------------------------------------------------------------------
//function to move y motor

int ymove(float distance){
 float stepnumber = 0.6 * distanceToSteps(distance);
  if(stepnumber >= 0){
     digitalWrite(DIR2, LOW);
 
  
  for(int i = 0; i<stepnumber; i++)
  {
    digitalWrite(STEP2, HIGH);
    delayMicroseconds(delayno);
    digitalWrite(STEP2, LOW);
    delayMicroseconds(delayno);
  }
 delay(100);
 }
 else{
   digitalWrite(DIR2, HIGH);
  

  for(int i = 0; i>stepnumber; i--)
  {
    digitalWrite(STEP2, HIGH);
    delayMicroseconds(delayno);
    digitalWrite(STEP2, LOW);
    delayMicroseconds(delayno);
  }
   delay(100);
 }
}


//------------------------------------------------------------------------------
//create function for lifting 
int penUp(){
  
  myServo.write(90);
  delay(200);
}


//--------------------------------------------------------------------------------
//create function for dropping pen
int penDown(){
  myServo.write(0);
  delay(100);
}

//--------------------------------------------------------------------------------
//create function for starting each alphabet
int start(){
    xmove(2);
    penDown();
    delay(500);
}
int bigstart(){
    xmove(2);
    ymove(-4);
    penDown();
    delay(500);
}

//--------------------------------------------------------------------------------
//create functions for each alphabets
int letterA(){
  Serial.println("motor is moving for a");
    start();
    xmove(5);
    ymove(3);
    xmove(-5);
    ymove(3);
    xmove(5);
    ymove(-6);
    penUp();
    
   
}
int letterB(){
  Serial.println("motor is moving for b");
  bigstart();
  ymove(10);
  xmove(5);
  ymove(-6);
  xmove(-5);
  penUp();
  xmove(5);
  

}
int letterC(){
  Serial.println("motor is moving for c");
  start();
  ymove(6);
  xmove(5);
  penUp();
  ymove(-6);
  penDown();
  xmove(-5);
  penUp();
  xmove(5);
  
 
}
int letterD(){
  Serial.println("motor is moving for d");
  bigstart();
  penUp();
  ymove(4);
  xmove(5);
  penDown();
  xmove(-5);
  ymove(6);
  xmove(5);
  ymove(-10);
  ymove(4);
  penUp();

}
int letterE(){
  Serial.println("motor is moving for e");
  start();
  xmove(5);
  ymove(3);
  xmove(-5);
  ymove(3);
  xmove(5);
  xmove(-5);
  ymove(-6);
  penUp();
  xmove(5);
  

}
int letterF(){
  Serial.println("motor is moving for f");
  start();
  ymove(10);
  ymove(-5);
  xmove(5);
  xmove(-5);
  ymove(-5);
  xmove(5);
  penUp();

}
int letterG(){
  Serial.println("motor is moving for g");
  start();
  penUp();
  ymove(10);
  penDown();
  xmove(5);
  ymove(-10);
  xmove(-5);
  ymove(6);
  xmove(5);
  ymove(-6);
  penUp();

}
int letterH(){
  Serial.println("motor is moving for h");
  bigstart();
  ymove(10);
  ymove(-6);
  xmove(5);
  ymove(6);
  penUp();
  ymove(-6);
  

}
int letterI(){
  Serial.println("motor is moving for i");
  start();
  ymove(6);
  ymove(-6);
  penUp();
  

}
int letterJ(){
  Serial.println("motor is moving for j");
  start();
  penUp();
  ymove(10);
  penDown();
  xmove(3);
  ymove(-10);
  xmove(-3);
  xmove(6);
  penUp();
  

}
int letterK(){
  Serial.println("motor is moving for k");
  bigstart();
  ymove(10);
  ymove(-5);
  xmove(3);
  ymove(-4);
  ymove(4);
  xmove(3);
  ymove(5);
  penUp();
  ymove(-6);
}
int letterL(){
  Serial.println("motor is moving for l");
  bigstart();
  ymove(10);
  xmove(5);
   penUp();
  ymove(-6);
 
 

}
int letterM(){
  Serial.println("motor is moving for m");
  start();
  ymove(6);
  ymove(-6);
  xmove(3);
  ymove(6);
  ymove(-6);
  xmove(3);
  ymove(6);
  ymove(-6);
  penUp();
  

}
int letterN(){
  Serial.println("motor is moving for n");
  start();
  ymove(6);
  ymove(-6);
  xmove(5);
  ymove(6);
  ymove(-6);
  penUp();
  

}
int letterO(){
  Serial.println("motor is moving for o");
  start();
  ymove(6);
  xmove(5);
  ymove(-6);
  xmove(-5);
  xmove(5);
  penUp();
  

}
int letterP(){
  Serial.println("motor is moving for p");
  start();
  ymove(10);
  ymove(-4);
  xmove(5);
  ymove(-6);
  xmove(-5);
  xmove(5);
  penUp();
  

}
int letterQ(){
  Serial.println("motor is moving for q");
  start();
  ymove(6);
  xmove(5);
  ymove(4);
  xmove(3);
  xmove(-3);
  ymove(-10);
  xmove(-5);
  xmove(5);
  penUp();

}
int letterR(){
  Serial.println("motor is moving for r");
  start();
  ymove(6);
  ymove(-6);
  xmove(5);
  penUp();
  
}
int letterS(){
  Serial.println("motor is moving for s");
  start();
  penUp();
  xmove(5);
  penDown();
  xmove(-5);
  ymove(3);
  xmove(5);
  ymove(3);
  xmove(-5);
  penUp();
  ymove(-6);
  xmove(5);
  

}
int letterT(){
  Serial.println("motor is moving for t");
  bigstart();
  penUp();
  xmove(3);
  penDown();
  ymove(10);
  xmove(3);
  xmove(-3);
  ymove(-6);
  xmove(-3);
  xmove(6);
  penUp();

}
int letterU(){
  Serial.println("motor is moving for u");
  start();
  ymove(6);
  xmove(5);
  ymove(-6);
  penUp();

}
int letterV(){
  Serial.println("motor is moving for v");
  start();
  ymove(3);
  xmove(2);
  ymove(3);
  xmove(2);
  ymove(-3);
  xmove(2);
  ymove(-3);
  penUp();
}
int letterW(){
  Serial.println("motor is moving for w");
  start();
  ymove(6);
  xmove(2.5);
  ymove(-6);
  ymove(6);
  xmove(2.5);
  ymove(-6);
  penUp();

}
int letterX(){
  Serial.println("motor is moving for x");
  delay(2000);
}
int letterY(){
  Serial.println("motor is moving for y");
  start();
  ymove(6);
  xmove(5);
  ymove(4);
  xmove(-5);
  xmove(5);
  ymove(-10);
  penUp();
  

}
int letterZ(){
  Serial.println("motor is moving for z");
  start();
  xmove(3);
  ymove(6);
  xmove(3);
  penUp();
  ymove(-6);
}
//--------------------------------------------------------------
int number1(){
  start();
  xmove(3);
  ymove(6);
  xmove(-3);
  xmove(6);
  penUp();
  ymove(-6);
}

int number2(){
  start();
  xmove(6);
  ymove(3);
  xmove(-6);
  ymove(3);
  xmove(6);
  penUp();
  ymove(-6);
}

int number3(){
  start();
  xmove(6);
  ymove(3);
  xmove(-6);
  xmove(6);
  ymove(3);
  xmove(-6);
  xmove(6);
  ymove(-6);
  penUp();
}

int number4(){
  start();
  ymove(4);
  xmove(6);
  xmove(-2);
  ymove(-4);
  ymove(6);
  ymove(-6);
  penUp();
  xmove(2);
  
}

int number5(){
   start();
  penUp();
  xmove(5);
  penDown();
  xmove(-5);
  ymove(3);
  xmove(5);
  ymove(3);
  xmove(-5);
  penUp();
  ymove(-6);
  xmove(5);
}

int number6(){
  start();
  ymove(6);
  xmove(6);
  ymove(-3);
  xmove(-6);
  ymove(-3);
  xmove(6);
  penUp();
}

int number7(){
  start();
  xmove(6);
  ymove(6);
  ymove(-3);
  xmove(-3);
  xmove(6);
  penUp();
  ymove(-3);
}

int number8(){
  start();
  ymove(6);
  xmove(6);
  ymove(-3);
  xmove(-6);
  ymove(-3);
  xmove(6);
  ymove(3);
  ymove(-3);
}

int number9(){
  start();
  ymove(3);
  xmove(6);
  ymove(3);
  ymove(-6);
  xmove(-6);
  xmove(6);
  penUp();
}

int number0(){
   start();
  ymove(6);
  xmove(6);
  ymove(-6);
  xmove(-6);
  xmove(6);
  penUp();
}

int letterSpace(){
  Serial.println("space");
  
  xmove(6);
 
}

int plus(){
  Serial.println("motor moving for plus");
  start();
  penUp();
  xmove(3);
  penDown();
  ymove(6);
  ymove(-3);
  xmove(-3);
  xmove(6);
  penUp();
  ymove(-3);
}

int minus(){
  Serial.println("motor moving for minus");
  start();
  penUp();
  ymove(3);
  penDown();
  xmove(6);
  penUp();
  ymove(-3);
}

int equal(){
  Serial.println("motor moving for equal");
  start();
  penUp();
  ymove(2);
  penDown();
  xmove(6);
  penUp();
  ymove(2);
  penDown();
  xmove(-6);
  xmove(6);
  penUp();
  ymove(-4);
}


//--------------------------------------------------------------------------------
//function for checking each character
int checkchar(char test){
  switch(test){
    case 'a' :
    letterA();
    break;

    case 'b' :
    letterB();
    break;

    case 'c' :
    letterC();
    break;

    case 'd' :
    letterD();
    break;

    case 'e' :
    letterE();
    break;

    case 'f' :
    letterF();
    break;

    case 'g' :
    letterG();
    break;

    case 'h' :
    letterH();
    break;

    case 'i' :
    letterI();
    break;

    case 'j' :
    letterJ();
    break;

    case 'k' :
    letterK();
    break;

    case 'l' :
    letterL();
    break;

    case 'm' :
    letterM();
    break;

    case 'n' :
    letterN();
    break;

    case 'o' :
    letterO();
    break;

    case 'p' :
    letterP();
    break;

    case 'q' :
    letterQ();
    break;

    case 'r' :
    letterR();
    break;

    case 's' :
    letterS();
    break;

    case 't' :
    letterT();
    break;

    case 'u' :
    letterU();
    break;

    case 'v' :
    letterV();
    break;

    case 'w' :
    letterW();
    break;

    case 'x' :
    letterX();
    break;

    case 'y' :
    letterY();
    break;

    case 'z' :
    letterZ();
    break;
    
//for in case it comes in Uppercase

    case 'A' :
    letterA();
    break;

    case 'B' :
    letterB();
    break;

    case 'C' :
    letterC();
    break;

    case 'D' :
    letterD();
    break;

    case 'E' :
    letterE();
    break;

    case 'F' :
    letterF();
    break;

    case 'G' :
    letterG();
    break;

    case 'H' :
    letterH();
    break;

    case 'I' :
    letterI();
    break;

    case 'J' :
    letterJ();
    break;

    case 'K' :
    letterK();
    break;

    case 'L' :
    letterL();
    break;

    case 'M' :
    letterM();
    break;

    case 'N' :
    letterN();
    break;

    case 'O' :
    letterO();
    break;

    case 'P' :
    letterP();
    break;

    case 'Q' :
    letterQ();
    break;

    case 'R' :
    letterR();
    break;

    case 'S' :
    letterS();
    break;

    case 'T' :
    letterT();
    break;

    case 'U' :
    letterU();
    break;

    case 'V' :
    letterV();
    break;

    case 'W' :
    letterW();
    break;

    case 'X' :
    letterX();
    break;

    case 'Y' :
    letterY();
    break;

    case 'Z' :
    letterZ();
    break;

    case ' ' :
    letterSpace();
    break;

    case '1' :
    number1();
    break;

    case '2' :
    number2();
    break;

    case '3' :
    number3();
    break;

    case '4' :
    number4();
    break;

    case '5' :
    number5();
    break;

    case '6' :
    number6();
    break;

    case '7' :
    number7();
    break;

    case '8' :
    number8();
    break;

    case '9' :
    number9();
    break;

    case '0' :
    number0();
    break;

    
   default:
    Serial.println("waiting...");

    
  }
}
//-----------------------------------------------------------

int alphabets(String readString){
   if(readString.length() > 0){
        int textLength = readString.length() + 1;
        char alp_Array[textLength];
        readString.toCharArray(alp_Array, textLength);
        for (char test : alp_Array){
          checkchar(test);
        }


            
      }
}
//------------------------------------------------------------

int checkreadstring(String readString){
  
    if(readString == "plus" || readString == "Plus"){
    plus();
   
    }
    else if(readString == "minus" || readString == "Minus"){
    
    minus();
    
    }

   else if(readString == "equal" || readString == "Equal"){
    equal();
   
   }

    else if(readString == "bingo" || readString == "Bingo"){
    penUp();
    xmove(-100);
    }

    else if(readString == "backbite" || readString == "Backbite"){
     penUp();
    ymove(-100);
    }

    else if(readString == "bruno" || readString == "Bruno"){
      penUp();
      xmove(-50);
    }
    else if(readString == "romeo" || readString == "Romeo"){
      ymove(-50);
    }

        else if(readString == "space" || readString == "Space"){
          penUp();
      letterSpace();
    }
    else if(readString == "forward" || readString == "Forward"){
      penUp();
      ymove(18);
    }
    else{
    alphabets(readString);
   }
}




//--------------------------------------------------------------------------------
void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(200);
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
   pinMode(STEP2, OUTPUT);
  pinMode(DIR2, OUTPUT);
  myServo.attach(12);
}


//--------------------------------------------------------------------------------
void loop()
 
{
      penDown();
 while(Serial.available()){
      delay(2); //delay added to allow byte to arrive at the buffer
      alp = Serial.read();
      readString += alp;
      
    }
    if(readString.length() > 0){

      checkreadstring(readString);
     
      

        readString = "";
        penUp();
            
      }
    
    
    
}
