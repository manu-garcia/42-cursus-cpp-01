#include "Harl.hpp"

Harl::Harl()
{
    this->LVL_DEBUG = "debug";
    this->LVL_ERROR = "error";
    this->LVL_INFO = "info";
    this->LVL_WARNING = "warning";
    
    this->fn_show_level_msg[this->LVL_DEBUG] = &Harl::debug;
    this->fn_show_level_msg[this->LVL_ERROR] = &Harl::error;
    this->fn_show_level_msg[this->LVL_INFO] = &Harl::info;
    this->fn_show_level_msg[this->LVL_WARNING] = &Harl::warning;
}

void Harl::complain(std::string level)
{
    if (this->fn_show_level_msg[level])
    {
        (this->*fn_show_level_msg[level])();
    }
}

void Harl::debug(void)
{
    std::cout << "DEBUG: Harl is complaining about a DEBUG error" << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR: Harl is complaining about an ERROR" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: Harl is complaining about an INFO error" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING: Harl is complaining about a WARNING error" << std::endl;
}
