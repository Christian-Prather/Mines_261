/* CSCI 261 Assignment L7C: Cypher
 *
 * Author: Christian Prather
 *
 * This program loads a encrypted data file .txt and deciphers it, saving the readable file to a new .txt
 *
 * * 4/16/2019
 *
 */


#include <iostream>                             // for standard input/output
#include <fstream>                              // for the file manipulation
using namespace std;                            // using the standard namespace


int main()

{


    // Open the encrypted message
    ifstream secretMessage("secretMessage.txt");

    // Check if there is an error loading the file
    if (secretMessage.fail())
    {
        cerr << "Well crud I couldn't load the message" <<endl;
        return -1;
    }

    // Open a file for saving decrypted message to
    ofstream decipheredMessage ("decipheredMessage.txt");

    // Check if there was an error opening file
    if ( decipheredMessage.fail())
    {
        cerr << "Could not open file for writting" << endl;
        return -1;
    }

    // Variable to load data from file into
    char character;

    // While not at end of file load character decipher and save out to readable file
    while (!secretMessage.eof())
    {
        // Grab one char at a time for processing
        secretMessage.get(character);

        // If char is a space do not modify
        if (character == '\n')
        {
            // Write out to new file as is
            decipheredMessage << '\n';

        }

        // If a ~ replace with a space and write to new file
        else if (character == '~')
        {
              // Replace with space
              decipheredMessage << ' ';
        }

        // If not a newline or a ~ the add one char value to current data and save to new file
        else
        {
            // Add one char value to the current char in file (+49?)
            decipheredMessage << char(character +1);

        }

    }
    return EXIT_SUCCESS;                        // report our program exited successfully
}