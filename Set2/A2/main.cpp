/* CSCI 261 Assignment A2: Triangles
 *
 * Author: Christian Prather
 *
 * A program to determine distance between three coordinate points (user provided), and check if points form a triage.
 * If a triangle can be formed with the provided points the program with continue to calculate the area and perimeter.
 * Coordinate distances, area, and perimeter are all displayed to the user.
 */

// The include section adds extra definitions from the C++ standard library.


#include <iostream>
#include <cmath> // Access to basic math functions sqrt, power, etc
#include <iomanip> // String formatting


using namespace std;



int main()
{
   /*
    Enter the coordinates of the first vertex: 0 0
    Enter the coordinates of the second vertex: 2.5 3
    Enter the coordinates of the third vertex: 5 0


   */

   // Variable declaration
    double vertex1X;
    double vertex1Y;
    double vertex2X;
    double vertex2Y;
    double vertex3X;
    double vertex3Y;

    double side1;
    double side2;
    double side3;

    double perimeter;
    double area;
    double semiPerimeter;

    // Collect 3 coordinate points
    cout << setprecision(3)<<fixed;
    cout << "Enter the coordinates of the first vertex: ";
    cin >> vertex1X >> vertex1Y;
    cout << endl;
    cout << "Enter the coordinates of the second vertex: ";
    cin >> vertex2X >> vertex2Y;
    cout << endl;
    cout << "Enter the coordinates of the third vertex: ";
    cin >> vertex3X >> vertex3Y;
    cout << endl;

    // Compute all side lengths
    side1 = sqrt (pow((vertex2X - vertex1X), 2.0) + pow((vertex2Y -vertex1Y),2.0));
    side2 = sqrt (pow((vertex3X - vertex2X), 2.0) + pow((vertex3Y -vertex2Y),2.0));
    side3 = sqrt (pow((vertex1X - vertex3X), 2.0) + pow((vertex1Y -vertex3Y),2.0));
    cout << side1 << " " << side2 << " " << side3 << endl;

    // A triangle is possible IFF each side is smaller than the sum of the others.
    // Check if sides form a triangle and if so calculate area & perimeter. Otherwise terminate.

    if ((side1 < (side2 + side3)) && (side2 < (side1 + side3)) && (side3 < (side1 + side2)) )
    {
        cout << "These coordinates do form a triangle" << endl;
        cout << endl;

        perimeter = side1 + side2 + side3;
        semiPerimeter = perimeter / 2.0;
        area = sqrt(semiPerimeter*(semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

        cout << "The perimeter is: " << perimeter << endl;
        cout << "The area is: " << area << endl;
    }
    else
    {
        cout << "These coordinates do NOT form a triangle" << endl;
        return 0; // exit program
    }



    return 0;
}