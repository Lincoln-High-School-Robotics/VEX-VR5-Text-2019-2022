//#GioByte10

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters

//  This code controls the Drive Base in which each Josytick (there are 2) controls One (1) motor
//  Free: 2 X Axis One (1) from each Joystick


#include "vex.h"         // VEX Library, Always include
using namespace vex;     


//-------------------------DECLARATIONS---------------------------

brain Brain;                                
motor rightMotor = motor(PORT1, false);     
motor leftMotor =  motor(PORT2, false);      
controller Control;                     // controller VarN     Initializes a variable for the control; No parameters needed


int main(){


  //To access the Joystick we use controllerVarN.AxisNumber.value/position()
  //where:
  // Axis1 = Right Joystick X Axis
  // Axis2 = Right Joystick Y Axis
  // Axis3 = Left  Joystick Y Axis
  // Axis4 = Left  Joystick X Axis

while(true){                                                                     //Repeats forever


   leftMotor.setVelocity(Control.Axis2.position(), velocityUnits::pct);
   leftMotor.spin(directionType::fwd);
   rightMotor.setVelocity(Control.Axis3.position(), velocityUnits::pct);
   rightMotor.spin(directionType::fwd);


}


}