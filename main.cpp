#include "robot-config.h"
          

int main() {
    while(1){
        
        Spinner.spin(vex::directionType::fwd, c.Axis3.position(vex::percentUnits::pct) - c.Axis4.position(vex::percentUnits::pct), vex::percentUnits::pct);
        Spinner2.spin(vex::directionType::rev, c.Axis3.position(vex::percentUnits::pct) + c.Axis4.position(vex::percentUnits::pct), vex::percentUnits::pct);
        Claw.spin(vex::directionType::fwd, c.Axis2.position(vex::percentUnits::pct), vex::percentUnits::pct);

        // Brain.Screen.print(c.Axis2.position(vex::percentUnits::pct));
        
    }
}
