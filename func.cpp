// function definitions

# include <iostream>
# include <vector>
# include "func.h"
using namespace std;

void greet() {
    cout<<"HANGMAN : The Game\nSave your friend from being hanged!"<<endl;
    cout<<"Enter your name- ";
    string name;
    cin>>name;
    cout<<name<<", here are the rules of the game:"<<endl;
    cout<<"Guess the word letter by letter\nFor each wrong guess a stick figure will be made step by step"<<endl;
    cout<<"Lets start!\n============================="<<endl;
}

void display_miss(int miss) {
    if(miss==0) {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

    } else if(miss==1) {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

    } else if(miss==2) {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<"  |   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

    } else if(miss==3) {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
        
    } else if(miss==4) {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
        
    } else if(miss==5) {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<" /    | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
        
    } else if(miss==6) {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<" / \\  | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
        
    } 
}

void display_status (vector<char> incorrect,string answer) {
    cout<<"Incorrect Guesses: "<<endl;
    for(int i=0; i<incorrect.size(); i++) {
        cout<<incorrect[i]<<" ";
    }

    cout<<"\nCodeword:\n";
    for(int i=0; i<answer.length(); i++) {
        cout<<answer[i]<<" ";
    }
}

void end_game(string answer, string codeword) {
    if(answer==codeword) {
        cout<<"Yayy! You saved the man\nCongratulations"<<endl;
    } else {
        cout<<"Oh no! The man is hanged!"<<endl;
    }
}
