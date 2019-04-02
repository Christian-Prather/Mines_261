/* CSCI 261: Fix Function Errors
 *
 * Author: Christian Prather
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2018 Dr. Jeffrey Paone

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

 */

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// input: integer
// output: none
// adds five to the given parameter
void addFive( int &x ) {
    x += 5;
}

// input: none
// output: a random number

int generateRandomNumber() {

    return rand() % 100;
}

// input: three integers
// output: the sum of all three parameters
int sum( int x, int y, int z ) {
    return x + y + z;
}

// input: two doubles
// output: the product of the two doubles
double multiply( double a, double b )
{
    return a * b;
}


// input: none
// output: Smiley face
void printSmileyFace()
{
    // Im proud of him
    cout <<" ^^^^^^^^^^^      ^^^^^^^^^^^" << endl;
    cout <<"    -------         -------" << endl;
    cout <<"  -----------     -----------" << endl;
    cout <<" -----  -----    -----   -----" << endl;
    cout <<"-----  0  ----- -----  0  -----" << endl;
    cout <<" -----  ------   -----   ------" << endl;
    cout <<"  -----------     -----------" << endl;
    cout <<"    --------        --------" << endl;

    cout << endl;
    cout <<"%%---------------------------%%" << endl;
    cout <<" %%%     |     |      |     %%%" << endl;
    cout <<"  %%%%___|_____|______|___%%%%" << endl;
    cout <<"   %%%%%      (        %%%%%" << endl;
    cout <<"     %%%%%%%%%%  %%%%%%%%%%" << endl;
    cout <<"      %%%%%%%%%%%%%%%%%%%%" << endl;

}

int main() {
    srand( time(0) );
    cout << "Welcome to Function World" << endl;

// SECTION I: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = change addFive(int x) to be a pass by reference void addFive( int &x)
// TESTS: numTrees = 5 -> 9, numTrees = 10 -> 15, numTrees = 800 -> 805

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    int numTrees = 800;
    cout << "There are initially " << numTrees << " trees." << endl;
    addFive( numTrees );
    cout << "We planted five trees, there are now " << numTrees << " trees." << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = Added a void function called printSmileyFace() above the int main()
//       Used smiley cout code from week 1
// TESTS: Simply ran multiple times to ensure consistency

    cout << endl;
    cout << "******************" << endl;
    cout << "Section II" << endl;
    cout << "******************" << endl;

    printSmileyFace();

// SECTION III: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = seeding was occurring every random call, which occurred faster than time updated. Solution was to remove
//       srand(time(0)); from the generateRandomNumber() function and place it at the top of int main()
// TESTS: Ran multiple times results {91,12,0,56,18}, {94,99,70,22,98}

    cout << endl;
    cout << "******************" << endl;
    cout << "Section III" << endl;
    cout << "******************" << endl;

    cout << "Five different random numbers are: " << endl;

    for( int i = 0; i < 5; i++ ) {
        cout << "\t" << generateRandomNumber() << endl;

    }


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = sum() takes three arguments, was only being passed two. Solution was to pass num3 as well. Sum() was also only
//       adding the first parameter, fixed by changing return x+x+x to retrun x+y+z
// TESTS: 2,10,20 = 32 | 6,17,18 = 41

    cout << endl;
    cout << "******************" << endl;
    cout << "Section IV" << endl;
    cout << "******************" << endl;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The sum of all three is " << sum( num1, num2, num3) << endl;

// SECTION V: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = change generateRandomNumber to generateRandomNumber() the former will always result in a 1 since its like asking
//       what is the address of the generateRandomNumber function
// TESTS: Ran multiple times results = 97 | 23 | 51

    cout << endl;
    cout << "******************" << endl;
    cout << "Section V" << endl;
    cout << "******************" << endl;

    cout << "Another random number is " << generateRandomNumber()  << endl;

// SECTION VI: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = multiply() was acting like a function which ran a single line, an empty line in this case so it did nothing
//       and was expected to return a double, fixed by adding function block that returned a * b
// TESTS: 2.0, 3.0 = 6 | 4.2, 6.8 = 28.56 | 6.1, 2 = 12.2

    cout << endl;
    cout << "******************" << endl;
    cout << "Section VI" << endl;
    cout << "******************" << endl;

    double doub1, doub2;
    cout << "Enter two doubles: ";
    cin >> doub1 >> doub2;
    cout << "Their product is: " << multiply( doub1, doub2 ) << endl;

    cout << endl;
    cout << "******************" << endl;
    cout << "Section Done" << endl;
    cout << "******************" << endl;

    cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}

