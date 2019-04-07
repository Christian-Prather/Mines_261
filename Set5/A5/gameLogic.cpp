//
// Created by Christian on 3/7/2019.
//

#include "gameLogic.h"
#include <iostream>

using namespace std;

// Iterates through the word and board to see if they perfectly match for a game WIN!
bool correctWord(char board[], char word[])
{
    for (int i = 0; i <= sizeof(board) - 1; i++)
    {
        // If at any point letter at indices i in word is not letter at indices i in board then they dont match yet
        if (board[i] != word[i])
        {
            return false;
        }
    }
    return true;
}

// Iterates through the word to see if the guess appears anywhere in the word
bool letterInWord(char guessLetter, char theWord[7], char (&board)[7])
{
    bool inWord = false;
    for (int i = 0; i <= sizeof(theWord) - 1; i++)
    {

        // If there is a match at indices i then fill board i with the guess, this remakes the word array in array board
        // for later comparison in correctWord()
        if (guessLetter == theWord[i])
        {
            board[i] = guessLetter;
            inWord = true; // Set if guess in word at all regardless of duplicates
        }
    }

    // If guess in word return true
    if (inWord)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Iterates through the array of past guesses to see if current guess is in it
bool legalGuess(char guess, char guessList[])
{
    bool solidGuess = true; // Default to legal guess
    for (int j = 0; j <= sizeof(guessList) - 1; j++)
    {
        // If the guess in the guess array at any point then the guess is not valid
        if (guess == guessList[j])
        {
            // Let the user know to guess again but dont take away a guess
            cout << "You already guessed: " << guess << "." << endl;
            solidGuess = false;
            break;
        }
    }

    // If a valid guess return true
    if (solidGuess)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// A function to iterate through the word and print out each char individually to display to the user
void printItGood(char word[])
{
    for (int i = 0; i <= sizeof(word)-1; i++)
    {
        cout << word[i] << " ";
    }
}