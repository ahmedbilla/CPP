#include <iostream>
#include <cstdlib>

int check_isnumber(std::string number, int length)
{
    int i = 0;
    if(number[i] == '-' || number[i] == '+')
        ++i;
    while (i < length)
    {
        std::cout << number[i] << std::endl;
        
        if (isdigit(number[i]) && number[i] != '.')
        {
            std::cout << "rah rir number \n";
        }
        else
        {
            std::cout << "la rah khasr\n";
        }
        i++;
    }
    return 0;
}
int main(int ac, char *av[])
{
    std::string param;
    int len;
    if (ac == 2)
    {
        param = av[1];

        len = param.length();
        check_isnumber(param, len);
        // std::cout << param << std::endl << len << std::endl;
    }
}