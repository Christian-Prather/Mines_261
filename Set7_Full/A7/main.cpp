/* CSCI 261 Assignment 7: Star Map
 *
 * Author: Christian Prather
 *
 * This program loads in a file of star data parses for key values, saves the edited values to a modified .txt and
 * graphs the data into a clean window using sfml
 *
 * * 4/16/2019
 *
 */



#include <iostream>                             // for standard input/output
#include <fstream>                              // File handling
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace


// Using strings for first load of data
#include <string>




int main()
{

    // Size of render window
    const int WIDTH = 640;
    const int HEIGHT = 640;



    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************

    // Load input if star data and output of parsed data
    ifstream starData("stars.txt");
    ofstream modifiedData("ModifiedStars.txt");

    // Check if either loads failed, if so exit and notify user
    if(starData.fail())
    {
        cerr << "Could not load data"<<endl;
        return  -1;

    }

    if (modifiedData.fail())
    {
        cerr << "Could not write to file"<<endl;
        return -1;

    }

    // Declaration of variables for use in data load
    string data;
    double xCoordinate;
    double yCoordinate;
    double zCoordinate;
    double brightness;
    double lossData1;
    double lossData2;

    // Tracking which star is brightest
    double BRIGHTEST_STAR = 0;

    // Transformed coordinates
    int xPixel;
    int yPixel;



        // While there are still lines of data to read in load each variable row by row
        while (!starData.eof())
        {
            starData >> xCoordinate >> yCoordinate >> zCoordinate >> brightness >> lossData1 >> lossData2;

            // Ignore any star with a brightness over 8.0
            if (brightness < 8.0)
            {
                // Convert coordinates
                xPixel = (int) ((xCoordinate + 1) * WIDTH / 2);
                yPixel = (int) ((-yCoordinate + 1) * HEIGHT / 2);
                // Display to user formatted and converted x,y brightness data
                cout << xPixel << "\t" << yPixel << "\t" << brightness << endl;

                // Save out the data to new .txt
                modifiedData << xPixel << '\t' << yPixel << '\t' << brightness << endl;

                // Track highest brightness seen
                if (brightness > BRIGHTEST_STAR)
                {
                    BRIGHTEST_STAR = brightness;
                }
            }
        }

        // Close both files
        starData.close();
        modifiedData.close();


        // Reload modified data, this is inefficentt and I would love to know of a better structure to accomplish this

        ifstream loadData ("ModifiedStars.txt");
        if(loadData.fail())
        {
            cerr << "Could not load data"<<endl;
            return  -1;

        }

        // Generate a render window now so it has less time where its loading
        RenderWindow window( VideoMode(WIDTH, HEIGHT), "Stars the limit" );

        // Parse through the modified file adn generate a star object for each
        while (!loadData.eof())
        {
            loadData >> xPixel >> yPixel >> brightness;

            // Set the position, radius, and color of each star based on current data loaded
            CircleShape star;
            star.setRadius(2);
            star.setPosition(Vector2f(xPixel, yPixel));
            int shadeOfGray = (int)( ( 255.0 * brightness ) / BRIGHTEST_STAR );
            star.setFillColor(Color(shadeOfGray,shadeOfGray,shadeOfGray));
            // Draw the star on the window
            window.draw(star);

        }
        // Close the data file again
        loadData.close();
        // Display the window
        window.display();

        // While the window is open check for a close command interrupt
        while( window.isOpen() )
        {
            Event event;
            while( window.pollEvent(event) ) {      // ask the window if any events occurred
                if( event.type == Event::Closed ) { // if event type is a closed event
                                                    // i.e. they clicked the X on the window
                    window.close();                 // then close our window
                }
            }
        }

    return EXIT_SUCCESS;                        // report our program exited successfully
}