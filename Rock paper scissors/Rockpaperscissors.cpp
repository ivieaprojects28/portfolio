//Rock Paper Scissor Game//
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {
    srand(time(0));
    int result = 0;  
    int choice;
    string says;
    choice = (rand()%3)+1; //output between 1 and 3

    switch (choice) {
        case 1:
            says = "rock";
            break;
        case 2:
            says = "paper";
            break;
        case 3:
            says = "scissors";
            break;
    }
    string user_choice;
    cout <<"Rock...paper... (say your answer now)"<<endl;
    cin >>user_choice;
    cout << says<< "!"<< endl;


    //analysing combination of answers
    if (user_choice == says){
        result = 0;
        cout <<"Oh! O-O. We said the same thing. Go again?";
    }
    if (user_choice == "scissors" && says == "paper") {
        result = 1;
    }
    if (user_choice == "scissors" && says == "rock") {
        result = -1;
    }
    if (user_choice == "paper" && says == "rock") {
        result = 1;
    }
    if (user_choice == "paper" && says == "scissors") {
        result = -1;
    }
    if (user_choice == "rock" && says == "paper") {
        result = -1;
    }
    if (user_choice == "rock" && says == "scissors") {
        result = 1;
    }

    if (result == -1) {
        cout <<"I win! Good game! Should we play again?"<<endl;
        }
    else if (result = 1){
        cout <<"Aww, you win. Good game! Should we play again?";
        } 

    return 0;
}
