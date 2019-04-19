#include <iostream>
#include <fstream>
using namespace std;

#include <string>
#include <vector>

#include <iomanip>

class Word
{
public:
    string word;
    int frequency;

};

vector <Word> wordList;



int main()
{
    ifstream loadFile("test.txt");
    if (loadFile.fail())
    {
        cerr << "File not found... maybe use pipie"<< endl;
        return -1;
    }

    string currentWord;
    int progressBar = 0;
    while (!loadFile.eof())
    {
        bool wordMatch = false;
        loadFile >>  currentWord;
        cout << currentWord << endl;

        for (int i = 0; i < wordList.size(); i++)
        {
            if (currentWord == wordList[i].word)
            {
                wordMatch = true;
                wordList[i].frequency ++;


            }
        }
        if (!wordMatch)
        {
            cout << "Adding word" <<endl;
            Word newWord;
            newWord.word = currentWord;
            newWord.frequency = 1;

            wordList.push_back(newWord);
            cout << wordList.size()<<endl;

        }
        cout << "Compressing: " << setfill('=') << setw(progressBar) << ">" << endl;
        progressBar ++;

    }

    for (int j = 0; j < wordList.size(); j++)
    {
        cout << wordList[j].word<< wordList[j].frequency<<endl;

    }

    return 0;
}

void middleOut()
{

}