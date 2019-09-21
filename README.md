# VEX-VR5-Text
Note: The actual Code is find in FolderName/src/main.cpp but all the folder and files are needed tu run it

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters


#include "vex.h"         // VEX Library, Always include
using namespace vex;     


//-------------------------DECLARATIONS---------------------------
//We can give it the VarN that we want

//kW   VarN         Kw      Parm
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



}

VEXcode V5 Text Download:
https://www.vexrobotics.com/vexcode-download
