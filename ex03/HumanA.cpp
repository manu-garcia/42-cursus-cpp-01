
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
}

void HumanA::attack(void) const
{
    std::cout << name << ": I attack with my " << this->weapon.getType() << std::endl;
}