#ifndef HUMAN_H
#define HUMAN_H 

#include <iostream>
#include <string>

#include "./Weapon.hpp"

class HumanA{
    public:
        HumanA(std::string name, Weapon &WeaponA);
        ~HumanA();
        void attack();

    private:
        std::string m_name;
        Weapon &m_WeaponA;
};

#endif