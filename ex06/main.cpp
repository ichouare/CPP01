#include "./Harl.hpp"

int main(int ar, char **av)
{
    if(ar != 2)
        return(0);
    Harl myHrl;
    myHrl.complain(av[1]);
}   