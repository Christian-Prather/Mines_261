//
// Created by Christian on 3/7/2019.
//

#ifndef A5_GAMELOGIC_H
#define A5_GAMELOGIC_H

// Function prototypes definitions
bool correctWord(char board[], char word[]);
bool letterInWord(char guessLetter, char theWord[7], char (&board)[7]);
bool legalGuess(char guess, char guessList[]);
void printItGood(char word[]);
#endif //A5_GAMELOGIC_H
