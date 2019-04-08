/* CSCI 261 Assignment 6: Word Frequency
 *
 * Author: Christian Prather
 *
 * This program takes in user sentences until key term given, at which point it will calculate most/least used words and
 * letters and display info to user, will also sort words in alphabetical order.
 *
 * * 4/7/2019
 *
 */



#include <iostream>
#include <vector>
#include <string>
#include "wordCount.h"
using namespace std;


// Initialization of the vectors for user input and alphabetical words
vector<WordCount> theWords;
vector<WordCount> sortedVector;

// Function prototypes
void userInput();
void wordSplitter(string sentence, vector <WordCount> &theWords);
void wordSorter(vector<WordCount> &theWords, vector<WordCount> &sortedVector);

void sortedOutput(vector<WordCount> &sortedVector);
void letterPercent(vector<WordCount> &sortedVector);

int main()
{

    userInput(); // Take user input
    wordSorter(theWords, sortedVector); // Sort words in alphabetical order
    sortedOutput(sortedVector); // Print out the words in order and list highest occurrence word and least
    letterPercent(sortedVector);

    return 0;
}

// Until input is "I'm done!" take input string, split words, downcast letters and store in vector of individual structurs
void userInput()
{
    bool sentinal = false;

    while (!sentinal) {



        string sentence;

        getline(cin, sentence);
        if (sentence == "I'm done!")
        {
            cout << "Done"<<endl;
            cout << theWords.size();
            for (int i = 0; i < theWords.size(); i++)
            {
                cout << theWords[i].word << endl;

            }
            sentinal = true;
        }

        else
        {
            // Down cast all letters
            for (int i = 0; i < sentence.length(); i++)
            {
                sentence[i] = tolower(sentence[i]);

            }

            // Split all the words at a ' '
            wordSplitter(sentence, theWords);


        }

    }
}

// Split all words and store in vector of structs
void wordSplitter(string sentence, vector<WordCount> &theWords)
{

    int position;
    string sub;
    bool theEnd = false;
    // Split at a ' ' unitl we are at the end of the word
    while (!theEnd)
    {
        position = sentence.find_first_of(' ');

        // If end of word add whatever is left to vector
        if (position > -1)
        {

            sub = sentence.substr(0, position);
            sentence = sentence.substr(position + 1, sentence.length());
        }
        else
        {
            sub = sentence;
            theEnd = true;
        }

        // Check if the word has been stored yet
        bool pastWord = false;

        for (int i = 0; i < theWords.size(); i++)
        {
            // If in vector add thje structs count by 1
            if (sub == theWords[i].word)
            {
                theWords[i].count++;
                pastWord = true;

            }

        }
        // If not recorded yet add to vector
        if (!pastWord)
        {

            WordCount theWord;
            theWord.count = 1;
            theWord.word = sub;

            theWords.push_back(theWord);
        }

    }
}

// Sort the words in order of first letter
void wordSorter(vector<WordCount> &theWords, vector<WordCount> &sortedVector)
{

    string currentLowestWord = theWords[0].word;

    for (int i = 0; i < theWords.size(); i++)
    {


            char temp = theWords[i].word[0];
            char secoind = currentLowestWord[0];

            // If the current word should be very first add it to the front of the sortedVector
            if ( theWords[i].word[0] < currentLowestWord[0])
            {
                sortedVector.insert(sortedVector.begin(), theWords[i]);
                currentLowestWord = theWords[i].word;


            }
            // If not first itterate through the rest of sorted and find its place
            else
            {
                bool added = false;

                for (int j = 0; j < sortedVector.size(); j++)
                {
                    // If comes before word in sorted vector insert it at that spot
                    if ( theWords[i].word[0] < sortedVector[j].word[0])
                    {

                        sortedVector.insert(sortedVector.begin() + j, theWords[i]);
                        added = true;
                        break;



                    }

                }
                // Better way of doing this since I break but ran out of time to clean
                // Add to end if word doesnt come before any others in sorted vector
                if (!added)
                {
                    sortedVector.push_back(theWords[i]);
                }

        }




    }
    cout << "Sorted"<<endl;

}

// Just cout all words with stats
void sortedOutput(vector<WordCount> &sortedVector)
{
    int maxCount =0;
    int maxIndex =0;
    int leastCount = 1;
    int leastIndex = 0;
    for (int i = 0; i < sortedVector.size(); i++)
    {
        cout << "#" << i<< ": " << sortedVector[i].word << " : " << sortedVector[i].count << endl;
        if(sortedVector[i].count > maxCount)
        {
            maxCount = sortedVector[i].count;
            maxIndex = i;
        }
        if(sortedVector[i].count < leastCount)
        {
            leastCount = sortedVector[i].count;
            leastIndex = i;
        }


    }
    cout << "Most Frequent: " << sortedVector[maxIndex].word << "(" << sortedVector[maxIndex].count << ")" <<endl;
    cout << "Least Frequent: " << sortedVector[leastIndex].word << "(" << sortedVector[leastCount].count << ")" <<endl;
}

// Calcualte the letter occurence and percentage
void letterPercent(vector<WordCount> &sortedVector)
{
    // Two arrays for value comparison and storage
    // Wanted to use 2d array but cant with int and char
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int ammount[26] = {0};

    for (int i = 0; i < sortedVector.size(); i++)
    {
       string word = sortedVector[i].word;
       // For every word check every letter against letters array
        for (int j = 0; j < word.size(); j++ )
        {
            for (int z = 0; z < 26; z++)
            {
                // If a match at to ammount array and index
                if (word[j] == letters[z])
                {
                    ammount[z] += 1;

                }
            }
        }
    }

    // Loop through ammount find highest and corresponding letter
    double max = 0;
    int least = 0;
    int maxIndex = 0;
    int leastIndex = 0;
    int total = 0;
    for(int j = 0; j < 26; j++)
    {
        // Track total amount of letters
        total += ammount[j];

        if (ammount[j] > max)
        {
            maxIndex = j;
            max = ammount[j];
        }
        if (ammount[j] < least)
        {
            least = ammount[j];
            leastIndex = j;
        }
    }
    // Cal percent
    double perMax = max / total;

    // Output stats
    cout << "Most frequent: " << letters[maxIndex] << "(" << perMax << "%)" <<endl;
    cout << "Least frequent: " << letters[leastIndex] << "(" << least << "%)" <<endl;
    cout <<"Letters Sorted"<< endl;
}