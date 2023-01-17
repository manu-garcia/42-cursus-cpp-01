#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain(harl.LVL_DEBUG);
    harl.complain(harl.LVL_INFO);
    harl.complain(harl.LVL_WARNING);
    harl.complain(harl.LVL_ERROR);

    return 0;
}