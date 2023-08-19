#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
    public:
            Zombie(std::string name);
            ~Zombie();
            void announce(void);
    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
