#ifndef HUMANB_H
#define HUMANB_H 

#include <iostream>
#include <string>

#include "./Weapon.hpp"

class HumanB{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &WeaponB);
    private:
        std::string m_name;
        Weapon *m_WeaponB;
};

#endif