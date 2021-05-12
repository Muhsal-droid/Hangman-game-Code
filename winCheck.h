#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;
class winCheck {
public : 
vector < string > answer;
string word;
int errors = 0;
int guesses = 0;

void wordFinder(char letter,string word);
void getAnswer();
void printAnswer();
void checkAnswer(bool result);
};