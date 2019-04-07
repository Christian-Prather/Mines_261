/* CSCI 261 Lab 2B: Ohms law and STP calculator
 *
 * Author: Christian Prather
 *
 * A program for quick calculation of current based on voltage and resistance and of pressure of gas given moles, temperature
 * in kelvin, and volume in liters. Including string formatting.
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <iomanip>


// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    float voltage;
    float resistance;
    float current;
    cout << setprecision(3)<<fixed;

    cout << "Hello we're going to calculate current using Ohm's Law" << endl;
    cout << "Please enter the voltage and resistance" << endl;

    cout << "Voltage: " << endl;
    cin >> voltage;
    cout << "Resistance: " << endl;
    cin >> resistance;

    current = voltage / resistance;

    cout << "Your current is " << current <<" amp" << endl;

    const float R = .0821;
    float moles;
    float temperature;
    float volume;
    float pressure;




    cout <<"We're going to calculate the pressure of your gas." << endl;

    cout << "Please enter your number of moles, temperature in kelvin, and volume in liters." << endl;

    cout << "Moles: " << endl;
    cin >> moles;
    cout << "Temperature: " << endl;
    cin >> temperature;
    cout << "Volume: " << endl;
    cin >> volume;

    pressure = (moles * R * temperature) / volume;
    cout << "Pressure is: " << pressure << "atm" << endl;

    /*
     * Equation #01...Newton's 2nd Law (Physics): 40.269
     * Equation #12...............Area (Math)   :  8.000
     */
    //cout << setw(20);

    cout << "Equation #03 "<< setw(30) << setfill('.') << "Ohms Law (Physics): " << current << endl;
    cout << "Equation #01 " << setw(30) << setfill('.') << "Ideal Gas Law (Physics): " << pressure << endl;
    return 0; // signals the operating system that our program ended OK.
}
