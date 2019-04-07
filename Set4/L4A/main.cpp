/* CSCI 261 Lab 4A: Yatzee
 * 2/21/2019
 * Author: Christian Prather
 *
 * A program for checking two conditions of yatzee game
 */

#include <iostream>

using namespace std;

// Check is there is a six and count how many
bool isSixes( int die1, int die2, int die3, int die4, int die5 ) {

    int counter = 0;
    int dice[] = {die1, die2, die3, die4, die5};
    for (int i = 0; i <= 4; i ++)
    {
        if (dice[i] == 6)
        {
            counter += 1; // counter for actual game play later

        }

    }
    if (counter > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function to check if there are 4 dice of the same kind
bool isFourKind( int die1, int die2, int die3, int die4, int die5 ) {

    int dice[] = {die1, die2, die3, die4, die5};
    // Nested for loop for checking each dice against the rest
    for (int i = 0; i <= 4; i ++)
    {
        int diceVal = dice[i];
        int j = i + 1;
        int counter = 1;
        for (j; j <= 4; j++)
        {

            int secondDice = dice[j];
            if (diceVal == secondDice)
            {
                counter += 1;
                if (counter == 4 )
                {
                    // As soon as we see four of a kind exit the function
                    return true;

                }
            }
        }
    }

    return false;
}



