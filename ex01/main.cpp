#include "./Zombie.hpp"


void test()
{
    system("leaks a.out");
}
int main()
{
    int i = 0;
    int N = 6;
    // atexit(test);
    Zombie *ptr_Zombie = zombieHorde(N, "issam");
    while( i < N)
    {
        ptr_Zombie->announce();
        i++;
    }
        delete[] ptr_Zombie;
}