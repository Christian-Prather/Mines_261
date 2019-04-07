/* CSCI 261 Assignment Lab 5B: Array intro and evaluation
 *
 * Author: Christian Prather
 *
 * This program prompts the user to enter 15 numbers and incrementally stores them into an array to be displayed
 * at the end. Also evalueates the smallest and largest values in the array.
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

    int largestValue;
    int smallestValue;

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
    cout << endl;


    // Set the initial value of the array to smallest and largest
    largestValue = userNumbers[0];
    smallestValue = userNumbers[0];

    // loop through each value in array and see if its larger than current largest value
    for (int i = 1; i < 15; i++)
    {
        if (largestValue < userNumbers[i])
        {
            largestValue = userNumbers[i];
            // if array value is larger it becomes current largest
        }

    }

    // loop through each value in array and see if its smaller than current smallest
    for (int j = 1; j < 15; j++)
    {
        if (userNumbers[j] < smallestValue)
        {
            smallestValue = userNumbers[j];
            // if array value is smaller it becomes current smallest

        }
    }
    cout << "The largest number is: " << largestValue << endl;
    cout << "The smallest number is: " << smallestValue << endl;


    return 0;
}