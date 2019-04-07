/* CSCI 261 Lab 2E: Full Rock Paper Scissors Game
 *
 * Author: Christian Prather
 *
 * A simple single player rock paper scissors came using case and if logic to play against the computer.
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
    if (userChoice == 'R' || userChoice == 'r')
    {
        userChoice = 'R';
        cout << "Good choice you selected: Rock"<< endl;
        cout << endl;
    }
    else if (userChoice == 'P' || userChoice == 'p')
    {
        userChoice = 'P';
        cout << "Good choice you selected: Paper"<< endl;
        cout << endl;
    }
    else if (userChoice == 'S' || userChoice == 's')
    {
        userChoice = 'S';
        cout << "Good choice you selected: Scissors"<< endl;
        cout << endl;
    }

    cout << "The computer is now choosing ..." << endl;
    computerChoice = rand() % 3;
    if (computerChoice == 0)
    {
        cout << "The computer choose: Rock" << endl;
    }
    else if (computerChoice == 1)
    {
        cout << "The computer choose: Paper" << endl;
    }
    else if (computerChoice == 2)
    {
        cout << "The computer choose: Scissors" << endl;
    }


    if (userChoice == 'R')

    {
        switch(computerChoice)
        {
            case 0:
                cout << "Rock ties Rock. Tie Game." << endl;
                break;
            case 1:
                cout << "Rock looses to Paper. Computer Wins." <<endl;
                break;
            case 2:
                cout << "Rock beats Scissors. You Win!" << endl;
                break;
        }


    }
    else if (userChoice == 'P')
    {
        switch(computerChoice)
        {
            case 0:
                cout << "Paper beats Rock. You Win!" << endl;
                break;
            case 1:
                cout << "Paper ties Paper. Tie Game." <<endl;
                break;
            case 2:
                cout << "Paper looses to Scissors. Computer Win." << endl;
                break;
        }
    }
    else if (userChoice == 'S')
    {
        switch(computerChoice)
        {
            case 0:
                cout << "Scissors looses to Rock. Computer Wins." << endl;
                break;
            case 1:
                cout << "Scissors beats Paper. You Win!" <<endl;
                break;
            case 2:
                cout << "Scissors ties Scissors. Tie Game." << endl;
                break;
        }
    }
}