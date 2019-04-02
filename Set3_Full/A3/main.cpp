/* CSCI 261 Assignment A3: Guess the number
 *
 * Author: Christian Prather
 *
 * This program prompts a user for an upper and lower limit and generates a random number between them. Then has the
 * user guess the number giving high or low clues.
 * 2/7/2019
 *
 */
//include libraries
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    //constants
    const int TOO_CLOSE_DIFFERENCE = 5;
    const int TOO_HIGH_DIFFERENCE = 25;

    // variables for user input range and validation of random number
    int lowerBound;
    int upperBound;
    bool upperValid = false;
    int computerChoice;
    bool correctGuess = false;

    // variables for calculations
    int userChoice;
    int difference;
    int guessCounter = 0;


    srand(time(0)); //seeding with time






    cout << "Hold onto your pants, we're about to play guess-the-numbah!" << endl;
    cout << "Enter the lowest possible value: " << endl;
    cin >> lowerBound;
    cout << endl<< endl;

    // Run through the upper bound selection atleast once and exit loop if valid choice
    do
    {
        cout << "Enter the highest possible number: " <<endl;
        cin >> upperBound;
        if (upperBound >= lowerBound + 100)
        {
            upperValid = true;
        }
        else
        {
            cout << "High number must be at least 100 more than the low number."<<endl<<endl;
        }

    }while (!upperValid);

    // Generate random variable
    computerChoice = (rand() % upperBound) + 1;
    //cout << computerChoice <<endl; // Debugging tool

    // Check user guess at least once and run until correct guess
    do
    {
        cout << "Pick a number between " << lowerBound << " and " << upperBound <<endl;
        cin >> userChoice;

        // Calculat if user choice is high or low, useful to make delta caculation simpler (no abs needed)
        switch (userChoice > computerChoice)
        {
            case 0:
                if (userChoice == computerChoice)
                {
                    guessCounter++;
                    cout << "That's right! You won the game in " << guessCounter << " tries." <<endl;
                    return 0;
                }
                cout << "Too Low! ";
                difference = computerChoice - userChoice; // compiuter - user with no abs since know user is low
                if ( difference <= TOO_CLOSE_DIFFERENCE)
                {
                    cout << "Oooh you're close!" << endl;
                }
                else if ( difference >= TOO_HIGH_DIFFERENCE)
                {
                    cout << "Not even close!" << endl;

                }
                guessCounter ++;
                // Increment the guess tracker
                break;

            case 1:
                cout << "Too High! ";

                difference = userChoice - computerChoice; // user - computer with no abs since know user is high
                if ( difference <= TOO_CLOSE_DIFFERENCE)
                {
                    cout << "Oooh you're close!" << endl;
                }
                else if ( difference >= TOO_HIGH_DIFFERENCE)
                {
                    cout << "Not even close!" << endl;

                }
                guessCounter ++;
                break;

        }


    }while (!correctGuess);



return 0;
}