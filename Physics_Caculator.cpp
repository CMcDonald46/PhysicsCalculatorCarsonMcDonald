// Main File for the Physhics Calculator
// Created: 3/20/24
// Created by: Carson McDonald
// This is my main file that is in charge of menu input and has the function calls.
#include "Physics_Caculator.h"

int main() {
  int choice = 0; // Set integer choice to zero as the starting value.
  string color = "\x1b[" + to_string(32) + ";1m"; // For Colored Green Input!
  string reset = "\x1b[0m"; // Reset the Color back to Colorless!
  do                        // Beginning of my do while loop.
  {
    showMenu();
    cout << "Please enter a number to select an option: Please enter a number "
            "(int):"
         << endl;
      cout << color; // Change input to green!
    validateInt(choice);
      cout << reset; // Reset back to no color!
    if (choice == 1) {
      velocity();
    } else if (choice == 2) {
      acceleration();
    } else if (choice == 3) {
      do {
        motionMenu(); // Entering the motion menu do while loop.
        cout << color;
        validateInt(choice);
        cout << reset;
        if (choice == 1) {
          motionVelocity();
        } else if (choice == 2) {
          motionDistance();
        } else if (choice == 3) {
          motionVelocityFinal();
        } else if (choice == 4) {
          motionVelocityAverage();
        } else if (choice < 1 || choice > 5) {
          cout << "Invalid input for the Motion Menu." << endl;
        }
      } while (choice != 5); // Exiting the motion menu do while loop.
    } else if (choice == 4) {
      newtonsSecondLaw();
    } else if (choice == 5) {
      weight();
    } else if (choice == 6) {
      momentum();
    } else if (choice == 8) {
      clearScreen();
    } else if (choice > 8 || choice < 1) {
      cout << "Invalid option for the menu. Please enter a Number from 1-7."
           << endl;
    }
  } while (choice != 7); // End of do while loop.
  cout << "Thank you for using the Physics Calculator!" << endl;
  return 0;
}