#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string userResponse;
    cout << " Please enter a String: " <<endl;
    getline(cin, userResponse);
    //cout << userResponse;
    vector <string> vectorizedResponse;
    int position;
    do
    {
        position = userResponse.find_first_of(' ');
        if (position > - 1)
        {
            if (position == 0)
            {
                userResponse = userResponse.substr(position + 1, userResponse.length());
            }
            else
            {
                string word = userResponse.substr(0, position);
                vectorizedResponse.push_back(word);
                userResponse = userResponse.substr(position+1, userResponse.length());
            }

        }
        else
        {
            if (userResponse != "")
            {
                vectorizedResponse.push_back(userResponse);
            }

        }

    }while(position > -1);

    cout << "Awesome sauce you entered " << vectorizedResponse.size() <<" words and they are:" << endl;
    cout << endl;
    for (int i = 1; i < vectorizedResponse.size() +1; i++)
    {
        cout << i << ": ";
        cout << vectorizedResponse.at(i -1) << endl;

    }

    cout << endl;
    cout << "The first word is: " << vectorizedResponse.front()<< endl;
    cout << "The last word is: " << vectorizedResponse.back() << endl;
    cout << "Look at you choosing good words, proud of you" << endl;

    return 0;
}