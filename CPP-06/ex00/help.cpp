// #include <iostream>
// #include <cstdlib>

// int check_isnumber(const std::string& number)
// {
//     int i = 0;

//     if (number.empty())
//         return 0;

//     if (number[i] == '+' || number[i] == '-')
//         i++;

//     if (i == number.length())
//         return 0;

//     while (i < number.length())
//     {
//         if (!isdigit(number[i]))
//             return 0;
//         i++;
//     }

//     return 1;
// }
// int main(int ac, char *av[])
// {
//     std::string param;
//     int len;
//     if (ac == 2)
//     {
//         param = av[1];
//         check_isnumber(param);
//         // std::cout << param << std::endl << len << std::endl;
//     }
// }

#include <stdio.h>
#include <float.h> // Required for DBL_MAX

int main() {
    // %e prints in scientific notation (e.g., 1.79e+308)
    // %f would be too long to read easily
    printf("The maximum value of double is: %e\n", DBL_MAX);
    
    return 0;
}