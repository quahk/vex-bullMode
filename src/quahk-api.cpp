#include "vex.h"  

void bullDrive() {

int Axis1Position;
int Axis3Position;
int finalLeft;
int finalRight;

Axis1Position = Controller1.Axis1.position(percent);
Axis3Position = Controller1.Axis3.position(percent);

finalLeft = Axis3Position + Axis1Position;
finalRight = Axis3Position - Axis1Position;

leftWheels.spin(forward, finalLeft, percent);
rightWheels.spin(forward, finalRight, percent);
 
};