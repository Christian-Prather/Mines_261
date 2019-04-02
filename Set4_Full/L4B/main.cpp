/* CSCI 261  Lab 4B: Polar/ Cartesian Conversions
 * 2/21/2019
 * Author: Christian Prather
 *
 * A program for quick calculation of polar and cartesian conversions
 */
#include <iostream>
#include <cmath>

using namespace std;

// From polar to cartesian convertion
void polarToCartesian(const double RADIUS, const double ANGLE, double& xCoord, double& yCoord)
{
    xCoord = RADIUS * cos(ANGLE);
    yCoord = RADIUS * sin(ANGLE);
}

// From cartesian to polar
void cartesian2Polar(const double X_COORD, const double Y_COORD, double& radius, double& angle)
{
    radius = sqrt(pow(X_COORD,2) + pow(Y_COORD, 2));
    angle = atan((Y_COORD/X_COORD));
}

int main()
{
    // Pi used for calcs
    const double PI = 3.14159265;

    // Menu
    int userChoice;
    cout << "Welcome which direction do you want to convert 1) polar to cartesian 2) cartesian to polar" << endl;
    cin >> userChoice;
    cout << "Thank you please enter your values ex) x y or r theta... 5 10 or 7 22" << endl;

    // Could be a switch
    if (userChoice == 1)
    {
        // polar -> cartesian
        double radius;
        double theta;
        double x;
        double y;
        cin >> radius >> theta;
        theta = (PI/180) * theta;



    polarToCartesian(radius, theta, x, y);
    cout << "X: " << x << " Y: " << y << endl;

    }
    else if (userChoice == 2)
    {
        // cartesian -> polar
        double x;
        double y;
        double radius;
        double theta;
        cin >> x >> y;
        cartesian2Polar(x, y, radius, theta);
        theta = theta*(180/PI); // Convert to degrees
        cout << "Radius: " << radius << " Angle: " << theta << endl;

    }
    else
    {
        cout <<"Choice not valid..." << endl;

    }
    return 0;
}