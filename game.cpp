#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (void){

    srand (time(NULL)); //truly randomices numbers
      int number = rand() % 99 +1; // % gives the residue: numbers from 0 to 99, the plus 1 is used to make it from 1 to 100
      int guess;
      int tries;

      cout << "Please enter your guess:" << endl;
      cin >> guess;
      cout << number;

      if ((guess != number)&(guess < number))
      {
        cout << " Your guess was too low, try again!" << endl;
        tries++;
      }
      else if ((guess != number)&(guess > number))
      {
        cout << "Your try was too high, try again!" << endl;
        tries++;
      } else
      {
        cout << " You got it! You tried " << tries << " times."<< endl;
      }
  }
