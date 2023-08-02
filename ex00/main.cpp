#include "./Zombie.hpp"



int main()
{
    Zombie *zb1 = newZombie("Dave");
    zb1->announce();
    randomChump("JOHN");
    delete zb1;
}