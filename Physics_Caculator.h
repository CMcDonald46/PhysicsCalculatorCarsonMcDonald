// Physhics Caculator
// Created: 3/20/24
// Created by: Carson McDonald
// This is my header file that includes my function prototypes, definitions, and
// calls.
#ifndef PHYSICS_CALCULATOR_H
#define PHYSICS_CALCULATOR_H
// My libaries that I am using for C++.
#include "Input_Validation_Extended.h"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <stdlib.h>
#include <string>
using namespace std;
// My function prototypes.
void showMenu();
void velocity();
void acceleration();
void motionMenu();
void motionVelocity();
void motionDistance();
void motionVelocityFinal();
void motionVelocityAverage();
void newtonsSecondLaw();
void weight();
void momentum();
void clearScreen();
string color = "\x1b[" + to_string(32) + ";1m"; // For Colored Green Input!
string reset = "\x1b[0m"; // Reset the Color back to Colorless!
// My function definitions.
void showMenu() {
  cout << "Physics Calculator:" << endl;
  cout << "1. Velocity" << endl;
  cout << "2. Acceleration" << endl;
  cout << "3. Motion Equations" << endl;
  cout << "4. Newton's Second Law" << endl;
  cout << "5. Weight" << endl;
  cout << "6. Momentum" << endl;
  cout << "7. Exit" << endl;
  cout << "8. Clear Screen" << endl;
}
void velocity() {
  double ds, dt, v;
  string dsUnits, dtUnits;
  cout << "Velocity : v = ds / dt" << endl;
  cout << "Please enter the distance: " << endl;
  cout << color;
  ds = validateDouble(ds);
  cout << reset;
  cout << "Please enter the time: ";
  cout << color;
  dt = validateDouble(dt);
  cout << reset;
  cout << "Please enter the distance units: ";
  cout << color;
  dsUnits = validateString(dsUnits);
  cout << reset;
  cout << "Please enter the time units: ";
  cout << color;
  dtUnits = validateString(dtUnits);
  cout << reset;
  v = ds / dt;
  cout << "v = ds /dt" << endl;
  cout << "v = " << ds << " / " << dt << endl;
  cout << "The velocity is " << setprecision(4) << v << " " << dsUnits << "/"
       << dtUnits << endl;
}
void acceleration() {
  double dv, dt, a;
  string dvUnits, dtUnits;
  cout << "Acceleration : a = dv / dt" << endl;
  cout << "Please enter the velocity: ";
  cout << color;
  dv = validateDouble(dv);
  cout << reset;
  cout << "Please enter the time: ";
  cout << color;
  dt = validateDouble(dt);
  cout << reset;
  cout << "Please enter the velocity units for distance: ";
  cout << color;
  dvUnits = validateString(dvUnits);
  cout << reset;
  cout << "Please enter the time units: ";
  cout << color;
  dtUnits = validateString(dtUnits);
  cout << reset;
  a = dv / dt;
  cout << "a = dv / dt" << endl;
  cout << "a = " << setprecision(4) << dv << " / " << dt << endl;
  cout << "The acceleration is " << a << " " << dvUnits << "/" << dtUnits
       << " ^ 2" << endl;
  ;
}
void motionMenu() {
  cout << "Equations of Motion" << endl;
  cout << "1. Velocity" << endl;
  cout << "2. Distance" << endl;
  cout << "3. Velocity Final" << endl;
  cout << "4. Average Velocity" << endl;
  cout << "5. Return to Physhics Caculator" << endl;
  cout << "Please enter an integer from 1-5 to select an option: ";
}
void motionVelocity() {
  double a, t, v0, v;
  string aUnits, tUnits, v0Units;
  cout << "Motion Formula for Velocity : v = v0 + at " << endl;
  cout << "Please enter the acceleration: Please enter a double:";
  cout << color;
  a = validateDouble(a);
  cout << reset;
  cout << "Please enter the time: Please enter a double:";
  cout << color;
  t = validateDouble(t);
  cout << reset;
  cout << "Please enter the initial velocity: Please enter a double:";
  cout << color;
  v0 = validateDouble(v0);
  cout << reset;
  cout << "Please enter the acceleration units for distance: Please enter a "
          "string:";
  cout << color;
  aUnits = validateString(aUnits);
  cout << reset;
  cout << "Please enter the time units: Please enter a string:";
  cout << color;
  tUnits = validateString(tUnits);
  cout << reset;
  cout << "Please enter the initial velocity units for distance: Please enter "
          "a string:";
  cout << color;
  v0Units = validateString(v0Units);
  cout << reset;
  v = v0 + a * t;
  cout << "v = v0 + a * t" << endl;
  cout << "v = " << v0 << " + " << a << " * " << t << endl;
  cout << "The velocity is " << setprecision(4) << v << " " << v0Units << " / "
       << tUnits << endl;
}
void motionDistance() {
  double v0, t, a, s;
  string v0Units, tUnits, aUnits;
  cout << "Motion Formula for Distance : s = v0 * t + 0.5 * a * t^2" << endl;
  cout << "Please enter the initial velocity: Please enter a double:";
  cout << color;
  v0 = validateDouble(v0);
  cout << reset;
  cout << "Please enter the time: Please enter a double:";
  cout << color;
  t = validateDouble(t);
  cout << reset;
  cout << "Please enter the acceleration: Please enter a double:";
  cout << color;
  a = validateDouble(a);
  cout << reset;
  cout << "Please enter the initial velocity units for distance: Please enter "
          "a string:";
  cout << color;
  v0Units = validateString(v0Units);
  cout << reset;
  cout << "Please enter the time units: Please enter a string:";
  cout << color;
  tUnits = validateString(tUnits);
  cout << reset;
  cout << "Please enter the acceleration units for distance: Please enter a "
          "string:";
  cout << color;
  aUnits = validateString(aUnits);
  cout << reset;
  s = v0 * t + 0.5 * a * pow(t, 2);
  cout << "s = v0 * t + 0.5 * a * t^2" << endl;
  cout << "s = " << v0 << " * " << t << " + 0.5 * " << a << " * " << t << "^2"
       << endl;
  cout << "The distance is " << setprecision(4) << s << " " << v0Units << endl;
}
void motionVelocityFinal() {
  double v0, a, s, v2;
  string v0Units, aUnits, sUnits;
  cout << "Motion Formula for Velocity Final : v2 = v0^2 + 2 * a" << endl;
  cout << "Please enter the initial velocity: Please enter a double:";
  cout << color;
  v0 = validateDouble(v0);
  cout << reset;
  cout << "Please enter the acceleration: Please enter a double:";
  cout << color;
  a = validateDouble(a);
  cout << reset;
  cout << "Please enter the distance: Please enter a double:";
  cout << color;
  s = validateDouble(s);
  cout << reset;
  cout << "Please enter the initial velocity units for time: Please enter a "
          "string:";
  cout << color;
  v0Units = validateString(v0Units);
  cout << reset;
  cout
      << "Please enter the acceleration units for time: Please enter a string:";
  cout << color;
  aUnits = validateString(aUnits);
  cout << reset;
  cout << "Please enter the distance units: Please enter a string:";
  cout << color;
  sUnits = validateString(sUnits);
  cout << reset;
  v2 = pow(v0, 2) + 2 * a * s;
  cout << "v2 = v0^2 + 2 * a * s" << endl;
  cout << "v2 = " << v0 << "^2 + 2 * " << a << " * " << s << endl;
  cout << "The final velocity is " << setprecision(4) << v2 << " " << v0Units
       << " / " << sUnits << endl;
}
void motionVelocityAverage() {
  double v0, v1, v_bar;
  string v0Units, v1Units;
  cout << "Motion Formula for Velocity Average : v_bar = (v0 + v1) / 2" << endl;
  cout << "Please enter the initial velocity: Please enter a double:";
  cout << color;
  v0 = validateDouble(v0);
  cout << reset;
  cout << "Please enter the final velocity: Please enter a double:";
  cout << color;
  v1 = validateDouble(v1);
  cout << reset;
  cout << "Please enter the initial velocity units for distance: Please enter "
          "a string:";
  cout << color;
  v0Units = validateString(v0Units);
  cout << reset;
  cout << "Please enter the final velocity units for time: Please enter a "
          "string:";
  cout << color;
  v1Units = validateString(v1Units);
  cout << reset;
  v_bar = (v0 + v1) / 2;
  cout << "v_bar = (v0 + v1) / 2" << endl;
  cout << "v_bar = (" << v0 << " + " << v1 << ") / 2" << endl;
  cout << "The average velocity is " << setprecision(4) << v_bar << " "
       << v0Units << endl;
}
void newtonsSecondLaw() {
  double m, a, F;
  string mUnits, aUnits;
  cout << "Newtons Second Law : F = m * a" << endl;
  cout << "Please enter the mass: Please enter a double:";
  cout << color;
  m = validateDouble(m);
  cout << reset;
  cout << "Please enter the acceleration: Please enter a double:";
  cout << color;
  a = validateDouble(a);
  cout << reset;
  cout << "Please enter the mass units: Please enter a string:";
  cout << color;
  mUnits = validateString(mUnits);
  cout << reset;
  cout << "Please enter the acceleration units for distance / time ^ 2: Please "
          "enter a string:";
  cout << color;
  aUnits = validateString(aUnits);
  cout << reset;
  F = m * a;
  cout << "F = m * a" << endl;
  cout << "F = " << m << " * " << a << endl;
  cout << "The force is " << setprecision(4) << F << " " << mUnits << " / "
       << aUnits << " or N" << endl;
}
void weight() {
  double m, g, W;
  string mUnits, gUnits;
  cout << "Weight on Earth : W = m * g" << endl;
  cout << "Please enter the mass: Please enter a double:";
  cout << color;
  m = validateDouble(m);
  cout << reset;
  cout << "Please enter the gravity: Please enter a double:";
  cout << color;
  g = validateDouble(g);
  cout << reset;
  cout << "Please enter the mass units: Please enter a string:";
  cout << color;
  mUnits = validateString(mUnits);
  cout << reset;
  cout << "Please enter the gravity units: Please enter a string:";
  cout << color;
  gUnits = validateString(gUnits);
  cout << reset;
  W = m * g;
  cout << "W = m * g" << endl;
  cout << "W = " << m << " * " << g << endl;
  cout << "The weight is " << setprecision(4) << W << " "
       << "lbs" << endl;
}
void momentum() {
  double m, v, P;
  string mUnits, vUnits;
  cout << "Momentum : P = m * v" << endl;
  cout << "Please enter the mass: Please enter a double:";
  cout << color;
  m = validateDouble(m);
  cout << reset;
  cout << "Please enter the velocity: Please enter a double:";
  cout << color;
  v = validateDouble(v);
  cout << reset;
  cout << "Please enter the mass units: Please enter a string:";
  cout << color;
  mUnits = validateString(mUnits);
  cout << reset;
  cout << "Please enter the velocity units in distance / time : Please enter a "
          "string:";
  cout << color;
  vUnits = validateString(vUnits);
  cout << reset;
  P = m * v;
  cout << "P = m * v" << endl;
  cout << "P = " << m << " * " << v << endl;
  cout << "The momentum is " << setprecision(4) << P << " " << mUnits << " "
       << vUnits << endl;
}
void clearScreen() {
  string reset = "\x1b[0m";
  cout << "\033[2J\033[1;1H";
}
#endif // End if is used to end the header file.