#include <iostream>
#include <vector>
#include <stdlib.h>
#include "winCheck.h"
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
using namespace std;
//void checkAnswer(bool result);

void winCheck:: wordFinder(char letter,string word)
{
vector< int > arr;
 
    const char searchChar = letter; //letter to find

    size_t instanceFinder = word.find (searchChar, 0); //first instance of letter

        if(instanceFinder != string::npos){
            //push back if it is not the letter
            arr.push_back(instanceFinder);

        }


    while (instanceFinder != string::npos)
    {
       //this searches for the next character using wordfiner
        size_t nCharSearchOffset = instanceFinder + 1;

        instanceFinder = word.find(searchChar,nCharSearchOffset);

        if(instanceFinder != string::npos){
          arr.push_back(instanceFinder);

        }
    }
        // if the size of the array is not = 0, then go and check the answer
        if(arr.size() != 0){
            for (int i = 0; i < arr.size(); i++){
            int k = arr[i];
            answer[k] = word.at(k);
            guesses++;
            if(i == arr.size() - 1){
              checkAnswer(true);
            }
            }
        } else {
        checkAnswer(false);
        }


}

void winCheck::  getAnswer(){

    char letter;
    cout <<"\n Type a letter or char here: " << endl;
    cin >> letter;
    // gets passed to see if that is the actual word or not 
    wordFinder(letter,word);
}

void winCheck::  printAnswer(){

        for (int i = 0; i < answer.size(); i++)
        if(answer[i] == "null"){
         cout << "_ ";
        } else {
          cout << answer[i]+" ";
        }
        getAnswer();
}

void winCheck::  checkAnswer(bool result){
    if(result == 1) {
    if(guesses == word.length()){
        cout << word << endl;
        cout << "You have completed and have won this round" << endl;
    } else {
        printAnswer();
    }
    }
    else{
    errors++;
        if(errors == 7){
                cout << " _________     \n";
                cout << "|         |    \n";
                cout << "|         0    \n";
                cout << "|         |    \n";
                cout << "|        /|-   \n";
                cout << "|        / -   \n";
                cout << "|              \n";
                cout << "GAME OVER!! "<< endl;
            }
            else {
                switch(errors) {
                    case 1  :
                        cout << " _________     \n";
                            cout << "|         |    \n";
                            cout << "|         0    \n";
                            cout << "|              \n";
                            cout << "|              \n";
                            cout << "|              \n";
                            cout << "|              \n";
                                printAnswer();
                        break; //optional
                    case 2  :
                            cout << " _________     \n";
                            cout << "|         |    \n";
                            cout << "|         0    \n";
                            cout << "|         |    \n";
                            cout << "|              \n";
                            cout << "|              \n";
                            cout << "|              \n";
                                printAnswer();
                        break; //optional
                    case 3  :
                            cout << " _________     \n";
                            cout << "|         |    \n";
                            cout << "|         0    \n";
                            cout << "|         |    \n";
                            cout << "|        /     \n";
                            cout << "|              \n";
                            cout << "|              \n";
                                printAnswer();
                        break; //optional
                        case 4  :
                            cout << " _________     \n";
                            cout << "|         |    \n";
                            cout << "|         0    \n";
                            cout << "|         |    \n";
                            cout << "|        /|    \n";
                            cout << "|              \n";
                            cout << "|              \n";
                            printAnswer();
                        break; //optional
                        case 5  :
                            cout << " _________     \n";
                            cout << "|         |    \n";
                            cout << "|         0    \n";
                            cout << "|         |    \n";
                            cout << "|        /|-   \n";
                            cout << "|              \n";
                            cout << "|              \n";
                            printAnswer();
                        break; //optional
                    case 6  :
                            cout << " _________     \n";
                            cout << "|         |    \n";
                            cout << "|         0    \n";
                            cout << "|         |    \n";
                            cout << "|        /|-   \n";
                            cout << "|        /     \n";
                            cout << "|              \n";
                            printAnswer();
                        break; //optional
                    // you can have any number of case statements.


                }
            }
       }
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
