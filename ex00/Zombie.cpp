#include "./Zombie.hpp"


Zombie::Zombie(std::string name):name(name)
{

}

Zombie::~Zombie()
{
    std::cout << "destructor:" << this->name << " called" << std::endl;
}

void Zombie::setName(std::string name) 
{
    this->name = name;

}

void Zombie::announce(void)
{
    std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

// Zombie* newZombie( std::string name )
// {
//     Zombie *newZombie = new Zombie(name);
//     if(newZombie == NULL)
//         exit(0); 
//     return (newZombie);
// }

// void randomChump( std::string name )
// {
//     Zombie newZombie(name);
//     newZombie.announce();
// }