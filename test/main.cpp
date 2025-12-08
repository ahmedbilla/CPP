#include <iostream>

int main()
{
    int n;
    int res;

    std::cin >> n;


// if else while

    std::string mssg = "hello";

    printf("%s\n", "hello"); // char pointer

    try
    {
        if(n == 0)
        {
            throw "mssg"; // ??
        }

     res = 10 / n;
    std::cout << "res1 :"<<res <<std::endl;

    }
    catch(std::string param)
    {
        std::cout << "err: "<<param << std::endl;
    }
    std::cout << "res2:"<<res <<std::endl;
    
}
