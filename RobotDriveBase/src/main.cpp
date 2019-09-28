//#GioByte10

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters


#include "vex.h"         // VEX Library, Always include


using namespace vex;     


//-------------------------DECLARATIONS---------------------------

brain Brain;                                
motor rightMotor = motor(PORT1, false);     
motor leftMotor =  motor(PORT2, true);      
controller Control;

double LM, RM, Vector;



int main(){

  //task::sleep(1000);

  //Brain.Screen.print("Joystick Test has successfully started\n");

while(true){

  //task::sleep(500);
  //Brain.Screen.print("Axis 1 position = %d", Control.Axis1.position());
  //Brain.Screen.print(Control.Axis1.position());

  Vector = sqrt(pow(Control.Axis1.position(), 2) + pow(Control.Axis2.position(), 2));
  //Brain.Screen.print(int(Vector));

   LM = sqrt(pow(Vector * (cos (atan (Control.Axis2.position()/Control.Axis1.position()))),2) + pow(Vector * (sin (atan (Control.Axis2.position()/Control.Axis1.position()))),2));
   
   leftMotor.setVelocity(LM, velocityUnits::pct);
   leftMotor.spin(directionType::fwd);


}


}