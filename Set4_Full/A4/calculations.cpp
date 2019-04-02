//
// Created by Christian on 2/21/2019.
//
#include <iostream>
#include "calculations.h"
using namespace std;

void menu()
{
    bool quit = false;
    while (!quit)
    {
        int userChoice;
        cout << "Welcome to the new TI-836487234 calculator:" << endl;
        cout << "You have many options please select one:" << endl;
        cout << "1) Convert Pounds to Kilograms" <<endl;
        cout << "2) Convert Feet to Meters" <<endl;
        cout << "3) Calculate a body mass index (BMI)" <<endl;
        cout << "4) Convert bats to Batmen" <<endl;
        cout << "5) Convert number of programmers to Girlfriends" <<endl;
        cout << "6) Quit" <<endl;
        cin >> userChoice;

        switch (userChoice)
        {
            case 1:
                poundsToKilograms();
                break;
            case 2:
                feetToMeters();
                break;
            case 3:
                bodyMassIndex();
                break;
            case 4:
                batsToBatmen();
                break;
            case 5:
                codersToGirlFriends();
                break;
            case 6:
                quit = true;
                break;

        }
    }

}
// Function Definitions
void poundsToKilograms()
{
    double lbs;
    cout << "Please enter weight in LBS to convert to Kilograms: " <<endl;
    cin >> lbs;
    cout << "Kilograms: " << doPoundsToKilograms(lbs)<<endl;

}

double doPoundsToKilograms(double lbs)
{
    return lbs * 0.454;
}

void feetToMeters()
{
    double feet;
    cout << "Please enter feet to convert to Meters: " <<endl;
    cin >> feet;
    cout << "Meters: " << doFeetToMeters(feet)<<endl;
}

double doFeetToMeters( double feet)
{
    return feet * 0.3048;
}

void bodyMassIndex()
{
    double height;
    double weight;
    cout << "Please enter height in ft and weight in lbs to calculate BMI: " <<endl;
    cin >> height >> weight;
    //cin >> weight;
    weight = doPoundsToKilograms(weight);
    height = doFeetToMeters(height);
    cout << "BMI: " << doBMI(weight, height)<<endl;

}

double doBMI(double kilograms, double meters)
{
    return kilograms / (meters * meters);
}

void batsToBatmen()
{
    int bats;
    cout << "Please enter how many bats you have: " <<endl;
    cin >> bats;
    cout << "Batmen: " << doBatsToBatmen(bats)<<endl;
}

double doBatsToBatmen(int bats)
{
    return bats * .25;
}

void codersToGirlFriends()
{
    int coders;
    cout << "Please enter number of coders to determine number of Girlfriends: " <<endl;
    cin >> coders;
    cout << "Girlfriends: " << doCodersToGirlFriends(coders) << "Always zero...." <<endl;
}

int doCodersToGirlFriends(int coders)
{
    return 0; //Always
}