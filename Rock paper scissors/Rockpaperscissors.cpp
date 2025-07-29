//Rock Paper Scissor Game//
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {
    srand(time(0));
    
    int choice;
    string says;
    choice = (rand()%3)+1; //output between 1 and 3

    switch (choice) {
        case 1:
            says = "Rock";
            break;
        case 2:
            says = "Paper";
            break;
        case 3:
            says = "Scissors";
            break;
    }
    string user_choice;
    cout <<"Rock...paper..."<<endl;
    cin >>user_choice;
    cout << says<< "!"<< endl;


    //analysing combination of answers

    if (user_choice == says) {
        cout <<"Wow, the same answer! Let's go again!"<<endl;
    } else if (says == "Rock" && user_choice == "Paper") {
        cout <<"Paper beats rock, so you win :(. Go again?"<<endl;
    } else if (says == "Rock" && user_choice == "Scissors") {
        cout << "Rock beats scissors, so I win! Haha! >:)"<<endl;
    }

    return 0;
}
