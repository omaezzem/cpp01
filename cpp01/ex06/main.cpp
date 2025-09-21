#include "Harl.hpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "Usage: ./harlFilter <LEVEL>\n";
        return 1;
    }

    string input = argv[1];
    string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    int level = -1;

    for(int i=0;i<4;i++)
        if (levels[i] == input)
            level = i;

    Harl harl;
    harl.complainFromLevel(level);

    return 0;
}
