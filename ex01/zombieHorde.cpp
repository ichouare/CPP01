#include "./Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    int  i  = 0;
    if( N < 0 || name.empty())
        exit(0);
    Zombie *grpZombie = new Zombie[N];
    if(grpZombie == NULL)
        exit(0);
    while(i < N)
    {
        grpZombie[i].setName(name);
        i++;
    }
    return (grpZombie);


}