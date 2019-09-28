//#GioByte10

//Abreviations:       Kw: Keyword    VarN: Variable Name     Parm: Parameters

//This Code contains examples of how to program ALL the Controller buttons

#include "vex.h"

using namespace vex;


brain       Brain;
motor       testMotor(PORT1, false);
controller  Control;                   // controller VarN     
                                       // Initializes a variable for the control; No parameters needed  


   // Programmin Buttons is very easy using if's an a boolean value (true/false) of a Button being or not pressed:
   // 


int main() {

  task::sleep(2000);
  Brain.Screen.print("Buttons.v5 has been initialized successfully");


  while(true){


    if(!Control.ButtonX.pressing()){

      testMotor.setVelocity(60, velocityUnits::pct);

      if(Control.ButtonB.pressing()){

       testMotor.spin(directionType::fwd);

      }

      else if(Control.ButtonA.pressing()){

      testMotor.spin(directionType::rev);

      }
    }

  }
}
