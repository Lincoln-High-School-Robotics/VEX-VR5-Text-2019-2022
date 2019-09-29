/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\super                                            */
/*    Created:      Sun Sep 29 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen


// define your global instances of motors and other devices here


int main() {
    int count = 0;
   
    while(1) {
        Brain.Screen.printAt( 10, 50, "Hello V5 %d", count++ );
        // Allow other tasks to runhh
        this_thread::sleep_for(10);
    }
}
