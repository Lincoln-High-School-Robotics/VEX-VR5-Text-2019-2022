//#GioByte10

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters


#include "vex.h"         // VEX Library, Always include


using namespace vex;     


//-------------------------DECLARATIONS---------------------------

brain Brain;                                
motor rightMotor = motor(PORT1, false);     
motor leftMotor =  motor(PORT2, false);      
controller Control;

double LM, RM, Vector;



int main(){


while(true){


   leftMotor.setVelocity(Control.Axis2.position(), velocityUnits::pct);
   leftMotor.spin(directionType::fwd);
   rightMotor.setVelocity(Control.Axis3.position(), velocityUnits::pct);
   rightMotor.spin(directionType::fwd);


}


}