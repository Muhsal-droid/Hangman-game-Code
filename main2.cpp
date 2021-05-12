#include <iostream>
#include <vector>
#include <stdlib.h>
#include "levels.h"
#include "winCheck.h"
#include "Screen.h"
void level(int mode){
srand (time(NULL));
    // change words
    winCheck check;
    string words[10] = {"penguin","elephant","mexico","walnut","office","juxtaposition","aquamarine","madagascar","ferocious","cupcake"};
    int length = sizeof(words)/sizeof(words[0]);
    int selectWord = rand() %length;
    check.word = words[selectWord];


    if (mode == 1)
    {
       // print message 
    levels level ;
    level.mode = 1;
    level.printLevelIntro();
    }else if (mode == 2)
    {
    levels level ;
    level.mode = 2;
    level.printLevelIntro();
    }else if (mode == 3)
    {
    levels level ;
    level.mode = 3;
    level.printLevelIntro();
    }
    
    for (int i = 0; i < words[selectWord].length(); i++)
    {
        check.answer.push_back("null");
        if(i == words[selectWord].length()-1) {
            check.printAnswer();
        }
    }
}

int main()
{
    //print Start screen
    Screen window;
    window.mode = 1;
    window.printScreen();
    // mode equals the level of the game 
    int mode = 1;
    level(mode);
    mode =2;
    level(mode);
    mode = 3;
    level(mode);
    
    // print End Screen
    window.mode = 2;
    window.printScreen();
}
    
