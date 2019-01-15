/* CSCI 261 Lab 1C: GEOMETRIC CALCULATIONS
 *
 * Author: Christian Prather
 *
 * This program calculates the area of a prism and circle based on user input of the length, width, height, and radius
 * 1/14/2019
 *
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** MODIFY OR INSERT CODE BELOW HERE ********/

    int length;
    int width;
    int height;
    int volume;

    cout << "Hello this program will calculate the volume of any room, please enter the length, width, and height of your room in whole numbers..." << endl;
    cout << "Length: " << endl;
    cin >> length;
    cout <<"Width: " << endl;
    cin >> width;
    cout << "Height: " << endl;
    cin >> height;
    // Volume of a box is length times width times height.
    volume = length * width * height;
    cout << volume << endl;

    // Area of a circle
    double area;
    double radius;
    const double PI = 3.14159;

    cout << "We will now calculate the area of a circle: " << endl;
    cout << "Please enter the radius of the circle in meters... " << endl;
    cin >> radius;
    cout << "Calculating..." << endl;
    area = PI * (radius * radius);
    cout << "The area of your circle is " << area << " meters squared" << endl;



    /******** MODIFY OR INSERT CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}