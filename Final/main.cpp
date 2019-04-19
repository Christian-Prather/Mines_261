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

int middleOut(ofstream &compressedFile);

int main()
{
    ifstream loadFile("test.txt");
    if (loadFile.fail())
    {
        cerr << "File not found... maybe use pipie"<< endl;
        return -1;
    }

    ofstream compressedFile("compressed.pra");
    if (compressedFile.fail())
    {
        cerr << "Cant save file"<<endl;
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
    middleOut( compressedFile);


    return 0;
}

int middleOut( ofstream &compressedFile)
{
    int maxCount = 0;
    string maxWord;

    for (int i = 0; i < wordList.size(); i++) {
        if (wordList[i].frequency > maxCount) {
            maxCount = wordList[i].frequency;
            maxWord = wordList[i].word;
        }
    }

    string currentWord;
    ifstream loadFile("test.txt");
    if (loadFile.fail())
    {
        cerr << "File not found... maybe use pipie"<< endl;
        return -1;

    }
    while (!loadFile.eof())
    {
        loadFile >> currentWord;
        if (currentWord == maxWord)
        {
           compressedFile << " 1";

        }
        else
        {
            compressedFile << " " << currentWord;
        }
    }

}