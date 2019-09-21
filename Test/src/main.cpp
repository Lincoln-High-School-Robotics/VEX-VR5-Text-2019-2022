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
brain Brain;
motor RightMotor = motor(PORT1, false);
motor LeftMotor = motor(PORT2, true);


// define your global instances of motors and other devices here

void DriveTrain(int speed, directionType direction, int Time){

  RightMotor.setVelocity(speed, velocityUnits::pct);
  LeftMotor.setVelocity(speed, velocityUnits::pct);

  RightMotor.spin(direction);
  LeftMotor.spin(direction);

  task::sleep(Time * 1000);

  RightMotor.stop();
  LeftMotor.stop();
}

int main() {
   
   task::sleep(2000);

   Brain.Screen.print("TEST has successfully started");

   DriveTrain(30, directionType::fwd, 1);

   DriveTrain(30, directionType::rev, 1);
    
}