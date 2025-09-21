#include "Harl.hpp"


void Harl::complain(std::string level)
{
    void (Harl::*FuncPtr[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*FuncPtr[i])();
            return;
        }
    }
    std::cout << "[ UNKNOWN ]\nHarl doesn’t understand this complaint.\n";
}

int main() {
    Harl harl;

    harl.complain("DEBUG");
}