#include "./HumanB.hpp"




HumanB::HumanB(std::string name):m_name(name),m_WeaponB(NULL)
{

}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    if(m_WeaponB == NULL)
        exit(0);
    std::cout << m_name << " attacks with their " << m_WeaponB->getType() << std::endl ;
}

void HumanB::setWeapon(Weapon &WeaponB)
{
    m_WeaponB = &WeaponB;
}