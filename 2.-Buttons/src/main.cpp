//#GioByte10

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters

//This Code contains examples of how to program ALL the Controller buttons

#include "vex.h"

using namespace vex;


brain       Brain;
motor       testMotor(PORT1, false);
controller  Control;                   // controller VarN     
                                       // Initializes a variable for the control; No parameters needed  


   // Programmin Buttons is very easy using if's and a boolean value (true/false) of a Button being or not pressed:
   // controllerVarN.ButtonName.pressing()
   // Where:
   // controllerVarN = The variable's name of the controller previously declared
   
   // ButtonName:
   // ButtonA
   // ButtonB
   // ButtonX
   // ButtonY
   // Don't know the exact name of the other 4 Buttons (remember there are 8 buttons in total)
   
   // pressing() = return true or false of: Is the Button pressed?

   /* e.g    if(Control.ButtonA.pressing()){
                DoSomething;
             }
   */

int main() {

  task::sleep(2000);
  Brain.Screen.print("Buttons.v5 has been initialized successfully");

  testMotor.setVelocity(60, velocityUnits::pct);  
                    
                                                              // Note that, just two buttons are used here, but you could
                                                              // program All 8 if you want

  while(true){                                                //Repeats Forever

      if(Control.ButtonA.pressing())                          //When Button A is pressed motor moves forward
         testMotor.spin(directionType::fwd);

      else if(Control.ButtonB.pressing())                     //When Button B is pressed motor moves backward
         testMotor.spin(directionType::rev);

      else
         testMotor.stop();

      
    }

  }

