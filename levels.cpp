#include <iostream>
#include <vector>
#include <stdlib.h>
#include "levels.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
using namespace std;

    void levels::printLevelIntro()
    {
        if (mode == 1)
        {
        cout << "**************************************\n";
        cout << "Welcome to HANGMAN!!! \nAre you ready to play? \n. Good luck!" << endl;
        cout << " _____________  \n";
        cout << "|   Welcome to |\n";
        cout << "|    Level 1   |\n";
        cout << "|              \n";
        cout << "|              \n";
        cout << "|              \n";
        cout << "|              \n";


        }else if (mode ==  2)
        {
        cout << "**************************************\n";
        cout << "|--------------|\n";
        cout << "|   Welcome to |\n";
        cout << "|    Level 2   |\n";
        cout << "|              |\n";
        cout << "|              |\n";
        cout << "|              |\n";
        cout << "|              |\n";
        cout << "|--------------|\n";
        }else if (mode == 3)
        {
        cout << "**************************************\n";
        cout << "|--------------|\n";
        cout << "|  Welcome to  |\n";
        cout << "|   Level 3    |\n";
        cout << "|              |\n";
        cout << "|              |\n";
        cout << "|              |\n";
        cout << "|              |\n";
        cout << "|--------------|\n";

        }
        
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////