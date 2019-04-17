/* CSCI 261 Assignment L6B: String splitting
 *
 * Author: Christian Prather
 *
 * This program takes in user sentences and splits the sentence by words to determine the first and last word.
 * This is displayed to the user.
 * * 4/6/2019
 *
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string userResponse;
    cout << " Please enter a String: " <<endl;
    getline(cin, userResponse);
    //cout << userResponse;
    vector <string> vectorizedResponse;
    int position;
    // Look for a space at least once if none then user entered one word otherwise split words at all spaces until no
    // spaces left (positon < -1)
    do
    {
        position = userResponse.find_first_of(' ');
        if (position > - 1)
        {
            // If the space is at beginning ignore it
            if (position == 0)
            {
                userResponse = userResponse.substr(position + 1, userResponse.length());
            }
            // Substring from start of word to space, remove word for string, and add word to vector
            else
            {
                string word = userResponse.substr(0, position);
                vectorizedResponse.push_back(word);
                userResponse = userResponse.substr(position+1, userResponse.length());
            }

        }
        else
        {
            // If last char is a space ignore it
            if (userResponse != "")
            {
                vectorizedResponse.push_back(userResponse);
            }

        }

    }while(position > -1);

    // Display out amount of words vector size
    cout << "Awesome sauce you entered " << vectorizedResponse.size() <<" words and they are:" << endl;
    cout << endl;

    // Display all words entered
    for (int i = 1; i < vectorizedResponse.size() +1; i++)
    {
        cout << i << ": ";
        cout << vectorizedResponse.at(i -1) << endl;

    }

    // Display the first and last words
    cout << endl;
    cout << "The first word is: " << vectorizedResponse.front()<< endl;
    cout << "The last word is: " << vectorizedResponse.back() << endl;
    cout << "Look at you choosing good words, proud of you" << endl;

    return 0;
}