#include <iostream>
using namespace std;

int main () {
    int quant, choice, q_rooms, q_pasta, q_burger, q_noodles, q_chicken, q_shake;

    //quantity of items
    q_rooms = q_pasta = q_burger = q_noodles = q_chicken = q_shake = 0;

    //number of food items that have been sold
    int s_rooms, s_pasta, s_burger, s_noodles, s_chicken, s_shake;
    s_rooms = s_pasta = s_burger = s_noodles = s_chicken = s_shake = 0;
    //total price of items 
    int total_rooms, total_pasta, total_burger, total_noodles, total_chicken, total_shake;
    total_rooms = total_pasta = total_burger = total_noodles = total_chicken = total_shake = 0;

    cout << "\n Quantity of items we have";
    cout << "\n Rooms available"<<endl;

    cin >>q_rooms;
    cout << "Quantity of pasta" <<endl;
    cin >>q_pasta;
    cout << "Quantity of burger" <<endl;
    cin >>q_burger;
    cout << "Quantity of noodles" <<endl;
    cin >>q_noodles;
    cout << "Quantity of chicken" <<endl;
    cin >>q_chicken;
    cout << "Quantity of shake" <<endl;
    cin >>q_shake;


    cout << "Please select from the menu options: " <<endl <<endl;
    cout <<"Rooms" <<endl;
    cout <<"Pasta" << endl;
    cout <<"Burger" <<endl; 
    cout <<"Noodles" <<endl;
    cout << "Chicken" <<endl;
    cout <<"Shake" <<endl;
}