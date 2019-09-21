//#GioByte10

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters


#include "vex.h"         // VEX Library, Always include
using namespace vex;     


//-------------------------DECLARATIONS---------------------------
//We can give it the VarN that we want

//kw   VarN         Kw      Parm
brain Brain;                                //No Parameters needed for the Brain
motor RightMotor = motor(PORT1, false);     //motor(portNumber, Reverse?);
motor LeftMotor =  motor(PORT2, true);      //motor(portNumber, Reverse?);

/*Note that declarations just need to be made once; To call or use a Variable
we need to call it by the VarN we give it.   e.g: Brain (VarN). NOT brain (Kw)*/


int main(){


  task::sleep(2000);                                   //  Delay, Wait.    task::sleep(TimeInMiliseconds);

  Brain.Screen.print("Code Successfully started");     //  Prints text in the Brain's Screen   
                                                       //  VarN.Screen.print("TextToPrint");

  RightMotor.setVelocity(50, velocityUnits::pct);      //  Just set the motor's speed to an X%, but doesn't run it
   LeftMotor.setVelocity(50, velocityUnits::pct);      //  VarN.setVelocity( (0, 100] %, velocityUnits::pct);

  RightMotor.spin(directionType::fwd);                 //  Runs the motor at the previous configured speed
   LeftMotor.spin(directionType::rev);                 //  VarN.spin(directionType::fwd/rev);


  task::sleep(4000);                                   //  Same as first sleep; This one will run the motor for 4 Seconds
                                                       //  Before we stop it with the next command

  RightMotor.stop();                                   //  Stops the motor
   LeftMotor.stop();                                   //  VarN.stop();



}