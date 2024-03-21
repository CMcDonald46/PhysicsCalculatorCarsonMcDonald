//Main File for the Physhics Calculator
//Created: 3/20/24
//Created by: Carson McDonald
//This is my main file that is in charge of menu input.
#include "Physics_Caculator.h"

int main()
{
  int choice = 0;
  do
    {
      showMenu();
     cin >> choice;
      if(choice == 1)
      {
        velocity();
      }
      else if(choice == 2)
      {
        acceleration();
      }
      else if(choice == 3)
      {
        motionMenu();
        {
          cin >> choice;
          if(choice == 1)
          {
            motionVelocity();
          }
          else if(choice == 2)
          {
            motionDistance();
          }
          else if(choice == 3)
          {
            motionVelocityFinal();
          }
          else if(choice == 4)
          {
            motionVelocityAverage();
          }
          else if (choice != 5)
              {
                  cout << "Invalid option for motion submenu." << endl;
              }
          } while (choice != 5);
        }
        else if(choice == 4)
      {
        newtonsSecondLaw();
      }
      else if(choice == 5)
      {
        weight();
      }
      else if(choice == 6)
      {
        momentum();
      }
    }
    while(choice != 7);
  cout << "Thank you for using the physics calculator." << endl;
  return 0;
}