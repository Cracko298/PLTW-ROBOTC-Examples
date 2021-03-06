#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)

void blink                       //Declares void in main
    {
    turnLEDOn(green);
    wait1Msec(500);
    turnLEDOff(green);
    wait1Msec(500);
    }

task main()
{
   int counter;                   //Declares a global variable int. We'll use this to setup our counter.
   counter = 0;
    while(counter < 20)           //Counts the variable until it reaches twenty
   {
    startMotor(rightMotor, 127);     
    startMotor(leftMotor, 127);
    startMotor(servoMotor, 127);
    turnFlashlightOn(flashlight, 127);
      wait1Msec(1500);
        stopMotor(rightMotor);
        stopMotor(leftMotor);
        stopMotor(servoMotor);
        turnFlashlightOff(flashlight);
     wait1Msec(1500);
        counter = counter + 1;      //Adds +1 to the variable counter
  }
  while(1==1)
  {
  void blink                       //Calls for the function in memory
  }
}
