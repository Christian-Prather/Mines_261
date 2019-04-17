/* CSCI 261 Assignment L7A: SFML drawing
 *
 * Author: Christian Prather
 *
 * This program uses SFML to draw multiple basic objects and position them to make a shape (train)
 *
 * * 4/15/2019
 *
 */



#include <iostream>                             // for standard input/output
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main()
{

    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), "Train Window" );

    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() )
    {
        window.clear( Color::Black );           // clear the contents of the old frame
                                                // by setting the window to black

        //****************************************
        //  ADD ALL OF OUR DRAWING BELOW HERE
        //****************************************



        // Draw the mid body of the train (rectangle)
        RectangleShape midRect;
        midRect.setSize( Vector2f( 250, 180 ) );
        midRect.setPosition( 60, 220 );
        midRect.setFillColor( Color(255, 0, 255) );
        window.draw( midRect );

        // Draw the back of the train (blue, rectangle)
        RectangleShape rect;
        rect.setSize( Vector2f( 200, 250 ) );
        rect.setPosition( 310, 150);
        rect.setFillColor( Color(0, 0, 255) );
        window.draw( rect );

        // Draw the exhaust port of the train
        RectangleShape chimny;
        chimny.setSize(Vector2f(25,100));
        chimny.setPosition(185, 120);
        chimny.setFillColor(Color(26,56,100));
        window.draw(chimny);

        // Draw the small front wheel
        CircleShape wheel1;
        wheel1.setPosition( 50, 400 );
        wheel1.setRadius( 50 );
        wheel1.setFillColor( Color::Yellow );
        window.draw( wheel1 );

        // Draw the small second wheel
        CircleShape wheel2;
        wheel2.setPosition( 150, 400 );
        wheel2.setRadius( 50 );
        wheel2.setFillColor( Color::Yellow );
        window.draw( wheel2 );

        // Draw the large back wheel
        CircleShape wheel3;
        wheel3.setPosition( 320, 350 );
        wheel3.setRadius( 80 );
        wheel3.setFillColor( Color::Yellow );
        window.draw( wheel3 );
        //****************************************
        //  ADD ALL OF OUR DRAWING ABOVE HERE
        //****************************************

        window.display();                       // display the window

        //****************************************
        // HANDLE EVENTS BELOW HERE
        //****************************************
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