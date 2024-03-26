// Validations for the Physhics Calculator
// Created: 3/20/24
// Created by: Carson McDonald
// This is my header file that includes the validations for input.
#include <ios>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
// My function prototypes for my validations.
double validateDouble(double &);
int validateInt(int &);
string validateString(string &);
char validateChar(char &);
template <typename T>
T getValidatedInput() // Template for Validations
{
  T result;
  cin >> result;
  if (cin.fail() || cin.get() != '\n') {
    cin.clear();
    while (cin.get() != '\n')
      ;
    throw ios_base::failure("Invalid input. ");
  }
  return result;
}

// My function definitions for my validations.
double validateDouble(double &doubleInput) {
  while (true) {
    cout << "Please enter a number (double): ";
    try {
      doubleInput = getValidatedInput<double>();
    } catch (exception &e) {
      cerr << e.what() << " : Please enter a valid number (double)." << endl;
      continue;
    }
    break;
  }
  return doubleInput;
}
int validateInt(int &intInput) {
  while (true) {
    // cout << "Please enter a number (int): "; Took this out so that my first input could be colored in main.
    // I ran into a problem where the first input and this cout statement were colored.
    try {
      intInput = getValidatedInput<int>();
    } catch (exception &e) {
      cerr << e.what() << " : Please enter a valid number (int)." << endl;
      continue;
    }
    break;
  }
  return intInput;
}
string validateString(string &stringInput) {
  while (true) {
    cout << "Please enter a string: ";
    try {
      stringInput = getValidatedInput<string>();
    } catch (exception &e) {
      cerr << e.what() << " : Please enter a valid string." << endl;
      continue;
    }
    break;
  }
  return stringInput;
}
char validateChar(char &charInput) {
  while (true) {
    cout << "Please enter a character: ";
    try {
      charInput = getValidatedInput<char>();
    } catch (exception &e) {
      cerr << e.what() << " : Please enter a valid character." << endl;
      continue;
    }
    break;
  }
  return charInput;
}