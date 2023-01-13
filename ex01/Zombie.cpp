#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "Unknwon zombie";
    std::cout << this->name << ": I am aliiiiivee!!!!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": I am ... dead!? :-(" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
    std::cout << this->name << ": I have a new name!!!!" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
