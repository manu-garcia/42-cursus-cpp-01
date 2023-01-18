#include "Harl.hpp"

static std::string str_tolowercase(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::tolower(str[i]);

    return str;
}

Harl::Harl()
{
    this->LVL_DEBUG = "debug";
    this->LVL_INFO = "info";
    this->LVL_WARNING = "warning";
    this->LVL_ERROR = "error";

    this->levelIndexes[this->LVL_DEBUG] = 0;
    this->levelIndexes[this->LVL_INFO] = 1;
    this->levelIndexes[this->LVL_WARNING] = 2;
    this->levelIndexes[this->LVL_ERROR] = 3;
}

void Harl::complain(std::string level)
{
    std::map<std::string, int>::iterator it = this->levelIndexes.find(str_tolowercase(level));
    if (it == this->levelIndexes.end()) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }

    switch (it->second) {
    case 0:
        Harl::debug();
    case 1:
        Harl::info();
    case 2:
        Harl::warning();
    case 3:
        Harl::error();
        break;
    }
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]:" << std::endl << "Harl is complaining about a DEBUG error" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]:" << std::endl << "Harl is complaining about an ERROR" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]:" << std::endl << "Harl is complaining about an INFO error" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]:" << std::endl << "Harl is complaining about a WARNING error" << std::endl;
}
