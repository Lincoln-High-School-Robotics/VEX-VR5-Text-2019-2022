/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\super                                            */
/*    Created:      Tue Sep 24 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
brain       Brain;
motor       testMotor(PORT1, false);
controller  Control;

// define your global instances of motors and other devices here


int main() {

  task::sleep(2000);

  Brain.Screen.print("Controller and Buttons.v5 has initialized successfully");

  //testMotor.setVelocity(60, velocityUnits::pct);

  while(true){

    if(!Control.ButtonX.pressing()){

      testMotor.setVelocity(60, velocityUnits::pct);

      if(Control.ButtonB.pressing()){

       testMotor.spin(directionType::fwd);

      }

      if(Control.ButtonA.pressing()){

      testMotor.spin(directionType::rev);

      }
    }else{

       testMotor.setVelocity(Control.Axis1.value(), velocityUnits::pct);
       testMotor.spin(directionType::undefined);

    }


    testMotor.stop();

  }
}
