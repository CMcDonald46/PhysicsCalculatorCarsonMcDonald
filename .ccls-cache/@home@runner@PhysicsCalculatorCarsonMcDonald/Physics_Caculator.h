// Carson McDonald
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
#include <iostream>
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
// My function definitions.
void showMenu() {
  cout << "Physics Calculator" << endl;
  cout << "1. Velocity" << endl;
  cout << "2. Acceleration" << endl;
  cout << "3. Motion" << endl;
  cout << "4. Newton's Second Law" << endl;
  cout << "5. Weight" << endl;
  cout << "6. Momentum" << endl;
  cout << "7. Exit" << endl;
  cout << "Please enter a number to select an option: ";
}
void velocity() {
  double ds, dt;
  string dsUnits, dtUnits;
  cout << "Velocity" << endl;
  cout << "Please enter the distance: ";
  ds = validateDouble(ds);
  cout << "Please enter the time: ";
  dt = validateDouble(dt);
  cout << "Please enter the distance units: ";
  dsUnits = validateString(dsUnits);
  cout << "Please enter the time units: ";
  dtUnits = validateString(dtUnits);
  cout << "The velocity is " << ds / dt << " " << dsUnits << "/" << dtUnits
       << endl;
}
void acceleration() {
  double dv, dt;
  string dvUnits, dtUnits;
  cout << "Acceleration" << endl;
  cout << "Please enter the velocity: ";
  dv = validateDouble(dv);
  cout << "Please enter the time: ";
  dt = validateDouble(dt);
  cout << "Please enter the velocity units: ";
  dvUnits = validateString(dvUnits);
  cout << "Please enter the time units: ";
  dtUnits = validateString(dtUnits);
  cout << "The acceleration is " << dv / dt << " " << dvUnits << "/" << dtUnits
       << endl;
  ;
}
void motionMenu() {
  cout << "Equations of Motion" << endl;
  cout << "1. Velocity" << endl;
  cout << "2. Distance" << endl;
  cout << "3. Velocity Final" << endl;
  cout << "4. Average Velocity" << endl;
  cout << "Please enter a number to select an option: ";
}
void motionVelocity() {
  double a, t, v0;
  string aUnits, tUnits, v0Units;
  cout << "Velocity" << endl;
  cout << "Please enter the acceleration: ";
  a = validateDouble(a);
  cout << "Please enter the time: ";
  t = validateDouble(t);
  cout << "Please enter the initial velocity: ";
  v0 = validateDouble(v0);
  cout << "Please enter the acceleration units: ";
  aUnits = validateString(aUnits);
  cout << "Please enter the time units: ";
  tUnits = validateString(tUnits);
  cout << "Please enter the initial velocity units: ";
  v0Units = validateString(v0Units);
  cout << "The velocity is " << v0 + a * t << " " << v0Units << " / " << tUnits
       << endl;
}
void motionDistance() {
  double v0, t, a;
  string v0Units, tUnits, aUnits;
  cout << "Distance" << endl;
  cout << "Please enter the initial velocity: ";
  v0 = validateDouble(v0);
  cout << "Please enter the time: ";
  t = validateDouble(t);
  cout << "Please enter the acceleration: ";
  a = validateDouble(a);
  cout << "Please enter the initial velocity units: ";
  v0Units = validateString(v0Units);
  cout << "Please enter the time units: ";
  tUnits = validateString(tUnits);
  cout << "Please enter the acceleration units: ";
  aUnits = validateString(aUnits);
  cout << "The distance is " << v0 * t + 0.5 * a * t * t << " " << v0Units
       << endl;
}
void motionVelocityFinal() {
  double v0, a, s;
  string v0Units, aUnits, sUnits;
  cout << "Velocity Final" << endl;
  cout << "Please enter the initial velocity: ";
  v0 = validateDouble(v0);
  cout << "Please enter the acceleration: ";
  a = validateDouble(a);
  cout << "Please enter the distance: ";
  s = validateDouble(s);
  cout << "Please enter the initial velocity units: ";
  v0Units = validateString(v0Units);
  cout << "Please enter the acceleration units: ";
  aUnits = validateString(aUnits);
  cout << "Please enter the distance units: ";
  sUnits = validateString(sUnits);
  cout << "The final velocity is " << pow(v0, 2) + 2 * a * s << " " << v0Units
       << " / " << sUnits << endl;
}
void motionVelocityAverage() {
  double v0, v1;
  string v0Units, v1Units;
  cout << "Velocity Average" << endl;
  cout << "Please enter the initial velocity: ";
  v0 = validateDouble(v0);
  cout << "Please enter the final velocity: ";
  v1 = validateDouble(v1);
  cout << "Please enter the initial velocity units: ";
  v0Units = validateString(v0Units);
  cout << "Please enter the final velocity units: ";
  v1Units = validateString(v1Units);
  cout << "The average velocity is " << (v0 + v1) / 2 << " " << v0Units << endl;
  ;
}
void newtonsSecondLaw() {
  double m, a;
  string mUnits, aUnits;
  cout << "Newtons Second Law" << endl;
  cout << "Please enter the mass: ";
  m = validateDouble(m);
  cout << "Please enter the acceleration: ";
  a = validateDouble(a);
  cout << "Please enter the mass units: ";
  mUnits = validateString(mUnits);
  cout << "Please enter the acceleration units: ";
  aUnits = validateString(aUnits);
  cout << "The force is " << m * a << " " << mUnits << " / " << aUnits << endl;
}
void weight() {
  double m, g;
  string mUnits, gUnits;
  cout << "Weight on Earth" << endl;
  cout << "Please enter the mass: ";
  m = validateDouble(m);
  cout << "Please enter the gravity: ";
  g = validateDouble(g);
  cout << "Please enter the mass units: ";
  mUnits = validateString(mUnits);
  cout << "Please enter the gravity units: ";
  gUnits = validateString(gUnits);
  cout << "The weight is " << m * g << " " << mUnits << " / " << gUnits << endl;
}
void momentum() {
  double m, v;
  string mUnits, vUnits;
  cout << "Momentum" << endl;
  cout << "Please enter the mass: ";
  m = validateDouble(m);
  cout << "Please enter the velocity: ";
  v = validateDouble(v);
  cout << "Please enter the mass units: ";
  mUnits = validateString(mUnits);
  cout << "Please enter the velocity units: ";
  vUnits = validateString(vUnits);
  cout << "The momentum is " << m * v << " " << mUnits << " / " << vUnits
       << endl;
}
#endif