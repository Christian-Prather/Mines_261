/* CSCI 261 Lab 3A: Full Rock Paper Scissors Game
 *
 * Author: Christian Prather
 *
 * A simple single player rock paper scissors came using case and if logic to play against the computer. With the ability
 * to auto play again.
 */



#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Variable declarations / assignment
    char userChoice;
    int computerChoice;
    char playAgain;
    int winCounter = 0;
    int lossCounter = 0;
    int tiedCounter = 0;
    int gamesPlayed = 0;

    // Seed random with current time
    srand(time(0));
    cout << "Hello Welcome to Rock, Paper, Scissors" << endl;
    cout << "You will be playing against the greatest program ever written by a master rock, paper, scissors " << endl;
    // run through game at leas once terminate at end if user does not select to plat again
    do {
    cout << "Enter Choice (R,P,S)" << endl;
    cin >> userChoice;

        // Check user choices (lower or upper r,p,s) acceptable
        if (userChoice == 'R' || userChoice == 'r') {
            userChoice = 'R';
            cout << "Good choice you selected: Rock" << endl;
            cout << endl;
        } else if (userChoice == 'P' || userChoice == 'p') {
            userChoice = 'P';
            cout << "Good choice you selected: Paper" << endl;
            cout << endl;
        } else if (userChoice == 'S' || userChoice == 's') {
            userChoice = 'S';
            cout << "Good choice you selected: Scissors" << endl;
            cout << endl;
        }
        // If input not valid punish user for not following directions and activate skynet
        else
        {
            cout << "INVALID INPUT ACTIVATING SKYNET PROTOCOL SELF DESTRUCTING....."<<endl;
            return 0;
        }

        // Computer generates choice
        cout << "The computer is now choosing ..." << endl;
        computerChoice = rand() % 3;
        // Use 1,2,3 for r,p,s should of used switch statement here
        if (computerChoice == 0) {
            cout << "The computer choose: Rock" << endl;
        } else if (computerChoice == 1) {
            cout << "The computer choose: Paper" << endl;
        } else if (computerChoice == 2) {
            cout << "The computer choose: Scissors" << endl;
        }


        // User choice can only be capital option now check if comp won or not based on both options
        if (userChoice == 'R') {
            switch (computerChoice) {
                case 0:
                    cout << "Rock ties Rock. Tie Game." << endl;
                    tiedCounter++;
                    break;
                case 1:
                    cout << "Rock looses to Paper. Computer Wins." << endl;
                    break;
                case 2:
                    cout << "Rock beats Scissors. You Win!" << endl;
                    winCounter++;
                    break;
            }
            // User choice can only be capital option now check if comp won or not based on both options
        } else if (userChoice == 'P') {
            switch (computerChoice) {
                case 0:
                    cout << "Paper beats Rock. You Win!" << endl;
                    winCounter++;
                    break;
                case 1:
                    cout << "Paper ties Paper. Tie Game." << endl;
                    tiedCounter++;
                    break;
                case 2:
                    cout << "Paper looses to Scissors. Computer Win." << endl;
                    break;
            }
            // User choice can only be capital option now check if comp won or not based on both options
        } else if (userChoice == 'S') {
            switch (computerChoice) {
                case 0:
                    cout << "Scissors looses to Rock. Computer Wins." << endl;
                    break;
                case 1:
                    cout << "Scissors beats Paper. You Win!" << endl;
                    winCounter++;
                    break;
                case 2:
                    cout << "Scissors ties Scissors. Tie Game." << endl;
                    tiedCounter++;
                    break;
            }
        }
        // Increment play counter
        gamesPlayed ++;
        // Ask if user wants to play again
        cout << "Play again? (y or n)";
        cin >> playAgain;
        cout << endl;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing...." << endl;
    //cout << "Win: " << winCounter << endl;
    //cout << "Loss: " << lossCounter << endl;
    //cout << "Tied: " << tiedCounter << endl;
    lossCounter = gamesPlayed - winCounter -tiedCounter;
    // Display game stats
    cout << "You won " << winCounter << ", lost " << lossCounter << " games, " << "tied " << tiedCounter << " games" <<" out of " << gamesPlayed << " games";
    return 0; // signals the operating system that our program ended OK.
}