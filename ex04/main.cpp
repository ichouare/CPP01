#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **ar)
{
    if (ac != 4)
        return (0);
    std::string line;
    std::string line_store;
    std::string filename;
    std::ofstream desFile;
    std::ifstream srcFile;
     int len  = 0;


    filename = ".replace";
    srcFile.open("./fiel1");
    desFile.open(filename, std::ios::in | std::ios::trunc | std::ios::out);
    if(!srcFile.is_open() || !desFile.is_open())
    {
        std::cout << "file name filed to open" <<std::endl;
        return 1;
    }
    int pos = 1;
    while(std::getline(srcFile, line))
    {
        int len  = 0;
        pos = line.find(ar[2]);
        while(pos != std::string::npos)
        {   
            len = line.length();
            line_store = line.substr(pos + strlen(ar[2]), line.length());;
            line = line.substr(0, pos);

            line += ar[3];
            line += line_store;
            pos = line.find(ar[2]);
        }
           desFile << line;
    }


    
}