#include <iostream>

#include "Zombie.hpp"

Zombie *zombieHorde(int numberZombies, std::string name)
{
    Zombie *horde = new Zombie[numberZombies];

    for (int i = 0; i < numberZombies; i++)
    {
        horde[i].setName(name);
    }

    return horde;
}