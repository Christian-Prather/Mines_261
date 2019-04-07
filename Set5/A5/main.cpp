/* CSCI 261 Assignment 5: Hangman
 *
 * Author: Christian Prather
 *
 * This program is a playable hangman game that asks the user to guess letters in a predefined word. The user is
 * given 7 wrong guesses to get the word right.
 *
 * * 3/7/2019
 *
 */

// Includes header files including personal game function prototypes
#include <iostream>
#include "gameLogic.h"
using namespace std;

// Sets word array, guess array, and bool flags for logic tracking and evaluation of state tracking
int main() {
    char safeWord[7] = {'b', 'a', 'r', 'i', 's', 't', 'a'};
    char guessArray[14] = {};
    char board[7] = {'_', '_', '_', '_', '_', '_', '_'};
    char userGuess;
    int guessCounter = 0; // tracks wrong guesses
    bool aMatch = false; // used for checking of guess matches any letter in word
    bool validGuess = false;
    int maxGuess = 7;
    bool correct; // used for checking if the guessed letters make the word
    cout << "Welcome to hangman!" << endl;


    // While loop runs until either the user runs out of guesses or gets the word right
    while (true)
    {
        // reset comparison bools
        aMatch = false;
        validGuess = true;

        // Prompt the user for a guess
        cout << "Take a guess: "<< board << endl;
        cin >> userGuess;
        cout << "You guessed: " << userGuess <<endl;

        // Cast any upper case letter to lower
        userGuess = tolower(userGuess);

        // Run legalGuess function to check if a guess has already been used
        validGuess = legalGuess(userGuess, guessArray);

        // If the letter has not already been guessed validGuess = true
        if (validGuess)
        {
            guessArray[guessCounter] = userGuess;

            // Check if the guess matches any letter in the word, if so return true
            aMatch = letterInWord(userGuess, safeWord, board);

            // Inform the user of a match or not, if not display guesses remaining
            if (aMatch)
            {
                cout << "Theres a: " << userGuess << "!" << endl;
                cout << board << endl;
            }
            else
            {
                guessCounter++;
                cout << "Sad Panda not a match pick again you have " << maxGuess - guessCounter << " wrong guesses left"
                     << endl;
            }

        }

        // Check if plyer is out of guesses if so exit the game
        if (guessCounter == maxGuess)
        {
            cout << "Sorry that was your last guess :(" << endl;
            return 0;
        }

        // Check if word successfully guessed, if so exit the game
        correct = correctWord(board, safeWord);
        if (correct)
        {
            break;
        }

    }

    // Congrats
    cout << "WOOOOOOO Youre the bom dot com! The word was: ";
    printItGood(safeWord);

    return 0;
}


