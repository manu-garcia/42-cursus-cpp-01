
#include <iostream>

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

void create_zombie_stack(void)
{
    std::cout << "Creating a zombie on the stack." << std::endl;

    Zombie zombieStack("Stackyzzz");
    zombieStack.announce();
}

void create_zombie_heap(void)
{
    std::cout << "Creating a zombie on the heap." << std::endl;

    Zombie *zombieHeap = newZombie("Heapyzzz");
    if (zombieHeap)
    {
        zombieHeap->announce();
        delete zombieHeap;
    }
}

int main(void)
{
    create_zombie_stack();
    create_zombie_heap();
    randomChump("Zombie Chump");
    return 0;
}