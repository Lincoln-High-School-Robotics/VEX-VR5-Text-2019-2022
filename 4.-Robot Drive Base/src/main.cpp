//#GioByte10

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters

//  This code controls the Drive Base in which one (1) Joystick controls both motors
//  (This is what the Math formula was for)
//  Free: 1 Full Joystick

#include "vex.h"         // VEX Library, Always include
using namespace vex;     


//-------------------------DECLARATIONS---------------------------

brain Brain;                                
motor rightMotor = motor(PORT1, false);     
motor leftMotor =  motor(PORT2, true);      
controller Control;

double LeftMotorSpeed, RightMotorSpeed, Vector;     // double variables (Real Numbers)
                                                    // int variables (Integers). Not used here.
// As VEX VR5 is C++ based, it shares its Math library and functions. Some of those are used here:
// Note that they all work with DOUBLE variables, that is why we intialize our variables type double
// pow(base, exponent);   Returns base^exponent
// sqrt(x);               Returns square root
// cos(x);                Returns the cosine of an angle of x radians.
// sin(x);                Returns the sine of an angle of x radians.
// atan(x);               Returns arcTan of an angle of x radians.


int main(){

  Brain.Screen.print("Robot Drive (1 Joystick) has successfully started\n");

while(true){     //Repeats Forever

  Vector = sqrt(pow(Control.Axis1.position(), 2) + pow(Control.Axis2.position(), 2));


   LeftMotorSpeed = sqrt(pow(Vector * (cos (atan (Control.Axis2.position() / Control.Axis1.position()))), 2) + pow(Vector * (sin (atan (Control.Axis2.position() / Control.Axis1.position()))), 2));
   RightMotorSpeed = sqrt(pow(Vector * (cos (atan (Control.Axis2.position() / Control.Axis1.position()))), 2) - pow(Vector * (sin (atan (Control.Axis2.position() / Control.Axis1.position()))), 2));

   leftMotor.setVelocity(LeftMotorSpeed, velocityUnits::pct);
   leftMotor.spin(directionType::fwd); 
   rightMotor.setVelocity(RightMotorSpeed, velocityUnits::pct);
   rightMotor.spin(directionType::fwd); 


}

return 0;                                            // ALWAYS AT THE END OF A PROGRAM

}