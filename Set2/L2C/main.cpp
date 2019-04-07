/* CSCI 261 Lab 2C: Non Complete Rock Paper Scissors Game
 *
 * Author: Christian Prather
 *
 * A start to a simple rock paper scissors game that is computer verse human, only contains specifice user choice and computer choice
 * generation. No game logic or input forgivness.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char userChoice;
    int computerChoice;
    srand(time(0));
    cout << "Hello Welcome to Rock, Paper, Scissors" << endl;
    cout << "You will be playing against the greatest program ever written by a master rock, paper, scissors " << endl;

    cout << "Enter Choice (R,P,S)" << endl;
    cin >> userChoice;
    cout << "Good choice you selected: " << userChoice << endl;
    cout << endl;

    cout << "The computer is now choosing ..." << endl;
    computerChoice = rand() % 3;
    cout << "The computer choose: " << computerChoice;

}