#include "movements.h"
#include "vex.h"

void rotDRIVE(int rotx, bool async) {
  LeftMotor1.spinFor(forward, rotx, degrees, async);
  LeftMotor2.spinFor(forward, rotx, degrees, async);
  RightMotor1.spinFor(forward, rotx, degrees, async);
  RightMotor2.spinFor(forward, rotx, degrees, async);
}

void powerDRIVE(int powerx, int timex) {
  LeftMotor1.setVelocity(powerx, percent);
  LeftMotor2.setVelocity(powerx, percent);
  RightMotor1.setVelocity(powerx, percent);
  LeftMotor2.setVelocity(powerx, percent);
  LeftMotor1.spin(forward);
  LeftMotor2.spin(forward);
  RightMotor1.spin(forward);
  RightMotor2.spin(forward);
  wait(timex, seconds);
  LeftMotor1.stop();
  LeftMotor2.stop();
  RightMotor1.stop();
  RightMotor2.stop();
}

void rotturnLEFT(int rotx, bool async) {
  LeftMotor1.spinFor(forward, rotx, degrees, async);
  LeftMotor2.spinFor(forward, rotx, degrees, async);
}

void rotturnRIGHT(int rotx, bool async) {
  RightMotor1.spinFor(forward, rotx, degrees, async);
  RightMotor2.spinFor(forward, rotx, degrees, async);
}

void powerturnLEFT(int powerx, int timex) {
  LeftMotor1.setVelocity(powerx, percent);
  LeftMotor2.setVelocity(powerx,percent);
  LeftMotor1.spin(forward);
  LeftMotor2.spin(forward);
  wait(timex,seconds);
  RightMotor1.stop();
  RightMotor2.stop();
}

void powerturnRIGHT(int powerx, int timex) {
  RightMotor1.setVelocity(powerx, percent);
  RightMotor2.setVelocity(powerx,percent);
  RightMotor1.spin(forward);
  RightMotor2.spin(forward);
  wait(timex, seconds);
  RightMotor1.stop();
  RightMotor2.stop();
}














