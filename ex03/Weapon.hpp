#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string.h>

class Weapon{
    public:
        Weapon(std::string newType);
        ~Weapon();
        const std::string& getType();
        void setType(std::string Type);
    
    private:
    std::string Type;
};

#endif