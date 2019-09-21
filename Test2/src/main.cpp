/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\super                                            */
/*    Created:      Wed Sep 11 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
brain       Brain;

motor LeftMotor = motor(PORT1, false);
motor RightMotor  = motor(PORT2, true);

// define your global instances of motors and other devices here


int main() {

    while(controller.ButtonL1){

    LeftMotor.setVelocity(30, velocityUnits::pct);
    RightMotor.setVelocity(30, velocityUnits::pct);

    }

    
    
}
