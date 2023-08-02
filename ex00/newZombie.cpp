#include "./Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *newZombie = new Zombie(name);
    if(newZombie == NULL)
        exit(0); 
    return (newZombie);
}
