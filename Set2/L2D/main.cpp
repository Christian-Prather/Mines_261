

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
    if (userChoice == 'R' | userChoice == 'r')
    {
        cout << "Good choice you selected: Rock"<< endl;
        cout << endl;
    }
   else if (userChoice == 'P' | userChoice == 'p')
    {
        cout << "Good choice you selected: Paper"<< endl;
        cout << endl;
    }
    else if (userChoice == 'S' | userChoice == 's')
    {
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


}