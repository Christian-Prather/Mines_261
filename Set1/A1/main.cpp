/* CSCI 261 Assignment 1: Hello World and ASCII Art
 *
 * Author: Christian Prather
 *
 * This program demonstrates the ability to display ascii art (smiley face) and showcases how to
 * display variable data types out as coherent english sentences.
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Ready to code!! Wait, I need to fill it all in myself?" << endl;

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


    const int COLLEGE_GEN = 1;
    int keyboardSize = 60;
    const int NUMBER_OF_BROTHERS = 3;
    cout << " Hello All" << endl;
    cout << " My name is Christian Prather..." << endl;
    cout << " I am a " << COLLEGE_GEN << "st generation college student." << endl;
    cout << " This Winter break I designed and constructed my own " << keyboardSize << "% mechanical keyboard."<<endl;
    cout << " I have "<< NUMBER_OF_BROTHERS << " older brothers." << endl;

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}