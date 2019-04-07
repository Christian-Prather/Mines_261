/* CSCI 261 Lab 3B: Multiplication table
 *
 * Author: Christian Prather
 *
 * This program calculates generates a multiplication table formatted for the user based on row x column user defined
 * values from 2-10
 * 2/6/2019
 *
 */

#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    // Variable declarations
    int numberOne, numberTwo;
    // bool validInput = false;
    bool firstValid = false;
    bool secondValid = false;


    // Debugging and checking removed for auto grader
    // cout << "Welcome human..." << endl;
    //cout << "I know you need help in math so lets do it..." << endl;


    // Ask for first value as long as one provided is not valid
    while (!firstValid)
    {
        //  cout << "1Please enter two values between 1 - 11" << endl;
        cin >> numberOne;
        if (numberOne > 1 && numberOne < 11)
        {
            firstValid = true;
        }

    }
    // Ask for second value as long as one provided is not valid
    while (!secondValid)
    {
        //cout << "2Please enter two values between 1 - 11" << endl;
        cin >> numberTwo;

        if (numberTwo > 1 && numberTwo < 11)
        {
            secondValid = true;
        }
    }

    // For every row in the in the table run column generation code
    for (int row = 0; row <= numberOne; row++)
    {
        // if on row one needs different formatting than normal rows
        if (row == 0)
        {
            for (int col = 1; col <= numberTwo; col++) {
                if (col == 1)
                {
                    cout << setw(6) << setfill('.') << col;

                } else
                {
                    cout << setw(4) << setfill('.') << col;
                }

            }
            // For all other rows besides row 1
        } else
            {
            // Run through columns filling
            for (int col = 1; col <= numberTwo; col++)
            {
                if (col == 1) {
                    // multiplication calc
                    int mult = row * col;
                    cout << setw(2) << setfill('.') << row << setw(4) << mult;
                } else {
                    int mult = row * col;

                    cout << setw(4) << setfill('.') << mult;
                }

            }
        }

        // Finish with new line
        cout << endl;


    }

    // Debugging removed for auto grader
    // else
    //{
    //   cout << "Invalid number choice please try again"<< endl;
    // }
    //cout << endl;
    //cout <<"line test";



    return 0;
}