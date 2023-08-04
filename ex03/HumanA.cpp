#include "./HumanA.hpp"




HumanA::HumanA(std::string name , Weapon &WeaponA):m_name(name),m_WeaponA(WeaponA)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << m_name << " attacks with their " << m_WeaponA.getType() << std::endl;
}