#ifndef ZOMBIE_H
#define ZOMBIE_H


#include <iostream>
#include <string.h>

class Zombie
{
    public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void announce(void);
    private:
    std::string name;
};
Zombie* zombieHorde( int N, std::string name );

#endif