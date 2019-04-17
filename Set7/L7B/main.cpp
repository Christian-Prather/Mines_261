/* CSCI 261 Assignment L7B: Star data load
 *
 * Author: Christian Prather
 *
 * This program loads star data as a tab separated .txt, parses the file for useful data, modifies the used data and
 * displays the values to the console
 *
 * * 4/15/2019
 *
 */


#include <iostream>                             // for standard input/output
#include <fstream>
using namespace std;                        // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace



#include <string>




int main()
{

    // Render window size used for transforming the coordinates loaded
    const int WIDTH = 640;
    const int HEIGHT = 640;


    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************

    // Load the star data file
    ifstream starData("stars.txt");

    // Check if the file loaded correctly
    if(starData.fail())
    {
        cerr << "Could not load data"<<endl;
        return  -1;

    }

    // Variables for use when loading data
    string data;
    double xCoordinate;
    double yCoordinate;
    double zCoordinate;
    double brightness;
    double lossData1;
    double lossData2;


    // While not at end of file load the data, parse, modify, and output
    while (!starData.eof())
    {
        // Load in the six packets of data for each row in the file
        starData >> xCoordinate >> yCoordinate >> zCoordinate >> brightness >>lossData1 >> lossData2;

        // If the brightness value of star is less than 8.0 we want to use it
        if (brightness < 8.0)
        {
            // Convert the x and y coordinates to fit in out render space
            int xPixel = (int)( ( xCoordinate + 1 ) * WIDTH / 2 );
            int yPixel = (int)( ( -yCoordinate + 1 ) * HEIGHT / 2 );
            // Display formatted data to the console, tab separated
            cout << xPixel << "\t" << yPixel << "\t" << brightness << endl;
        }

    }

    // Close the data file
    starData.close();

    return EXIT_SUCCESS;                        // report our program exited successfully
}