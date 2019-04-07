#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool userInput();
struct WordCount
{
    int count;
    string word;
};

int main()
{

    userInput();

    return 0;
}

bool userInput()
{
    bool sentinal = false;
    while (!sentinal) {


        vector<WordCount> theWords;
        string word;

        getline(cin, word);
        WordCount theWord;
        theWord.count = 1;
        theWord.word = word;

        theWords.push_back(theWord);

        if (word == "I'm done!")
        {
            cout << "Done"<<endl;
            cout << theWords.size();
            for (int i = 0; i < theWords.size(); i++)
            {
                cout << theWords[i].word;

            }
            sentinal = true;
        }
    }
}