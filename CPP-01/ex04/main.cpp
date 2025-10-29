// #include "sed.hpp"
#include <iostream>

class Sed
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Sed()
        {
            std::cout << "\033[1;31mSed is for losers\033[0m\n";
        }
        void setValues(std::string file, std::string str1, std::string str2)
        {
            filename = file;
            s1 = str1;
            s2 = str2;
        }
};  
int main(int ac, char *av[])
{
    Sed obj;
    if (ac == 4)
    {
        obj.setValues(av[1], av[2], av[3]);
    }
    else
    {
            std::cout << "\033[1;32m./Sed_is_for_losers\033[0m "
              << "\033[1;34m<filename>\033[0m "
              << "\033[1;33m\"S1\"\033[0m "
              << "\033[1;31m\"S2\"\033[0m\n";
    }
}



