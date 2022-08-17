// revisit a guessing game
// guessinggame.cpp
// g++ guessinggame.cpp -o guessing -Wall -std=c++11
// Lorena Aguilera

// tells coding program what libraries to use for this code
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int secret, guess, tries;
 
    tries = 0;
 
    srand(time(0)); //initializes random number generator
    secret = rand() % 10; //randomly selecting a secret number from 0 to 10
 
    //cout << secret << endl; //cheat code

    while (guess != secret and tries < 4) {
        //Using cout to control output
        cout << "Pick a number between 0 and 10, any numbergit ! you have 4 tries! >.< : ";

        //Using cin to control input 
        cin >> guess;

        // closing off output and starting a new line
        cout << endl;

        // checking if input is same as secret number
        if (guess == secret) {
            //output informing user
            cout << "How did you know that? e.e" << endl;
            cout << endl;
        }

        //checking if input is less than the secret
        else if (guess < secret) {
            //output
            cout << "Too low! Try again x_x" <<endl;
            tries++;
            cout << endl;
        }

        else {
            //output
            cout << "You're trying too hard! Think smaller! I'm just a game T.T" << endl;
            tries ++;
            cout << endl;
        }

    }
    // after 4 tries..
    if (tries == 4) {
        //output on what to do after 4 tries
        cout << "So Sorry, That was you're last chance!" << endl;
        cout << "The secret was " << secret << endl;
        cout << endl;
    }

// successfully ends program
return 0;

}
