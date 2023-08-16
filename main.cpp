
#include <iostream>

namespace name
{
    int age = 12;
    class issam {
        public:
            std::string userName()
            {
                return "issam";
            }
    };
    issam user;
    
} // namespace name


int ft_printble(std::string  str)
{
    int i = 0;
    while(str[i])
    {
        std::cout << "|" << str[i] << "|" <<  std::endl;
        if(std::isprint(str[i]) != 0 && str[i] != ' ')
            return (1);
        i++;
    }
    return(0);
}

int main()
{
        std::cout << ft_printble("       ");
}   