
#include <iostream>

#include "Zombie.hpp"

Zombie *zombieHorde(int numberZombies, std::string name);

int main(void)
{
    const int zombieNumber = 10;

    Zombie *horde = zombieHorde(zombieNumber, "Horde zombie");

    for (int i = 0; i < zombieNumber; i++)
    {
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}