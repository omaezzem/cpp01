#include "Harl.hpp"
#include <iostream>
using namespace std;

void Harl::debug() {
    cout << "[ DEBUG ]\nI love extra bacon on my burger!\n";
}
void Harl::info() {
    cout << "[ INFO ]\nAdding extra bacon costs more money.\n";
}
void Harl::warning() {
    cout << "[ WARNING ]\nI think I deserve some extra bacon for free.\n";
}
void Harl::error() {
    cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager!\n";
}

// Single complain function
void Harl::complain(std::string level) {
    string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    void (Harl::*funcs[4])() = { &Harl::debug,&Harl::info,&Harl::warning,&Harl::error };
    
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*funcs[i])();
            return;
        }
    }
    cout << "[ Probably complaining about insignificant problems ]\n";
    cout << "Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off.\n";
}

// Filter function using switch
void Harl::complainFromLevel(int level) {
    switch(level) {
        case 0: debug();
        case 1: info();
        case 2: warning();
        case 3: error();
            break;
        default:
            cout << "[ Probably complaining about insignificant problems ]\n";
            cout << "Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off.\n";
    }
}
