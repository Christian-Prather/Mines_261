/* CSCI 261 Assignment Lab 5C: Matrix storage and transpose
 *
 * Author: Christian Prather
 *
 * This program prompts the user to enter values of a predefined NxM matrix and stores them in a 2D array. It then
 * will compute the transpose of sed matrix and store it in a 2D array. Both matricies will be displayed.
 *
 * * 3/7/2019
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{

    // Set Matrix size
    const int ROWS = 2;
    const int COLUMNS = 3;

    int userChoice;

    // Set transpose size
    int theWorld[ROWS][COLUMNS];
    int worldUpsideDown[COLUMNS][ROWS];

    const int WIDTH = 4;


    cout << "Welcome Neo... follow the rabbit" << endl;
    cout << endl;
    cout << "Please enter a 4x3 matrix:" << endl;


    // For each row ask for a number in every column and save it in a 2d array
    for (int i = 0; i < ROWS; i ++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            cout << "Enter Row " << i + 1 << " Column " << j + 1 <<": ";
            cin >> userChoice;
            theWorld[i][j] = userChoice; // i is row j is column
            cout << endl;

        }

    }
    cout << "The matrix you entered is:" << endl;


    // iterate through every row and print out the value for every column
    // uses iomanip formatting
    for (int i = 0; i < ROWS; i ++)
    {
        cout << setw(WIDTH);
        cout << left;
        cout << "[ ";
        for (int j = 0; j < COLUMNS; j ++)
        {
            cout << setw(WIDTH);
            cout << left;
            cout << theWorld[i][j] << " ";
        }
        cout << setw(WIDTH);
        cout << left;
        cout << " ]" << endl;
    }

    // Calculate the trnasposed matrix by flipping the values in rows with values in columns
    for (int i = 0; i < ROWS; i ++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {

            worldUpsideDown[j][i] = theWorld[i][j];
        }
    }

    cout << "The transpose of the matrix is:"<< endl;

    // iterate through every row and print out the value for every column
    // uses iomanip formatting
    for (int i = 0; i < COLUMNS; i ++)
    {
        cout << setw(WIDTH);
        cout << left;
        cout << "[ ";
        for (int j = 0; j < ROWS; j ++)
        {
            cout << setw(WIDTH);
            cout << left;
            cout << worldUpsideDown[i][j] << " ";
        }
        cout << setw(WIDTH);
        cout << left;
        cout << " ]" << endl;
    }



    return 0;
}