/* CSCI 261 Assignment Lab 5A: Array intros
 *
 * Author: Christian Prather
 *
 * This program prompts the user to enter 15 numbers and incrementally stores them into an array to be displayed
 * at the end.
 * 3/7/2019
 *
 */

#include <iostream>
using namespace std;

int main()
{
    // initialize the array of size 15
    int userNumbers[15];
    int userInput;

    cout << "Welcome! Behold the glory and power that is my array!! Muhahaha" << endl;
    cout << "Enter 15 numbers and I will tell you what they are..." << endl;

    // ask the user for an input 15 times and store the value in the array
    for (int i = 0; i < 15; i++)
    {
        cout << "Number " << i + 1 <<": ";
        cin >> userInput;
        // store the user values int the array at indices i
        userNumbers[i] = userInput;
    }


    cout << "Awesome sauce" << endl;
    cout << "The numbers are: ";

    // loop through the array and print out each element
    for( int j = 0; j < 15; j++)
    {
        cout << userNumbers[j] << " ";
    }
    cout << endl;
    cout << "Have a solid day" << endl;
    return 0;
}