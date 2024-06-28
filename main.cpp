// main, definition, declaration

# include <iostream>
# include <vector>
# include <string>
# include "func.h"
using namespace std;

int main () {

    greet();

    string codeword="helloworld"; //word to guess 10 char
    string answer="__________";

    int miss=0;
    vector<char> incorrect;
    bool guess=false;
    char letter;

    while (answer!=codeword && miss<7) {
        display_miss(miss);
        display_status(incorrect, answer);

        cout<<"\nPlease enter your guess: ";
        cin>>letter;

        for(int i=0; i<codeword.length(); i++) {
            if(letter==codeword[i]) {
                answer[i]=letter;
                guess=true;
            }
        }
        if(guess) {
            cout<<"\nCorrect!"<<endl;
        } else {
            cout<<"\nIncorrect!\nAnother portion of man is drawn"<<endl;
            incorrect.push_back(letter);
            miss++;
        }
        guess=false; //default 
    } 

    end_game(answer, codeword);

    return 0;
}