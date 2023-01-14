
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = nullptr;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void) const
{
    if (this->weapon != nullptr)
    {
        std::cout << name << ": I attack with my " << this->weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " I don't have a weapon quite yet!" << std::endl;
    }
}