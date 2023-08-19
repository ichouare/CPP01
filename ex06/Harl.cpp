#include "./Harl.hpp"


Harl::Harl()
{

}

Harl::~Harl()
{
    
}

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldn t be asking for more!" << std::endl;
}

void Harl::warning()
{
        std::cout << "[WEARNING]" << std::endl;
     std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;
}


void Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int ch = -1;
    int i = 0;
    typedef void (Harl::*FunctionPtr)();
    const char*   options[4]  =  { "DEBUG" , "INFO" , "WARNING" , "ERROR"};
    FunctionPtr pyt_arr[4]= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
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
            (this->*pyt_arr[0])();
        case 1:
          (this->*pyt_arr[1])();
        case 2 :
           (this->*pyt_arr[2])();
        case 3:
           (this->*pyt_arr[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}