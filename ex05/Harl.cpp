#include "./Harl.hpp"


Harl::Harl()
{

}

Harl::~Harl()
{
    
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldn t be asking for more!" << std::endl;
}

void Harl::warning()
{
     std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;
}


void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int ch = -1;
    int i = 0;
    const char*   options[4]  =  { "DEBUG" , "INFO" , "WARN" , "ERROR"};
    void(Harl::*ptr_func)();
    if (level.empty())
        exit(0);
   while(i < 4)
   {
    if(options[i] == level)
        ch = i;
    i++;
   }
    switch(ch)
    {
        case 0:
            ptr_func = &Harl::debug;
            break;
        case 1:
            ptr_func = &Harl::info;
            break;
        case 2 :
            ptr_func = &Harl::warning;
            break;
        case 3:
            ptr_func = &Harl::error;
            break;
        default:
            std::cout << "not complaine for:" << level << std::endl;
            exit(0);
    }
    (this->*ptr_func)();
}