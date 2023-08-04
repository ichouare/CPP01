#include "./Weapon.hpp"


Weapon::Weapon(std::string newType):Type(newType)
{

}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
        return Type;
}

void Weapon::setType(std::string Type)
{
    this->Type = Type;
}