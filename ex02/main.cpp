#include <iostream>
#include <string.h>

int main()
{
    std::string ptrBrain = "HI THIS IS BRAIN";
    std::string *stringPTR ; 
    stringPTR = &ptrBrain;
    std::string &stringREF = ptrBrain;


    std::cout <<  "The memory address of the String variable:" << &ptrBrain << std::endl;
    std::cout <<  "The memory address of the Pointer variable:" << &stringPTR << std::endl;
    std::cout <<  "The memory address of the Reference variable:" << &stringREF << std::endl;

        std::cout <<  "The Value of the String variable:" << ptrBrain << std::endl;
    std::cout <<  "The Value of the Pointer variable:" << *stringPTR << std::endl;
    std::cout <<  "The Value of the Reference variable:" << stringREF << std::endl;

}