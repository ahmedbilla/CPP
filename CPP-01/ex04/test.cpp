#include <fstream>
#include <iostream>
#include <string>
int main()
{
    std::ifstream file("test.txt");
    std::string line;

    if(file.is_open())
    {
        while(getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.close();
    }
    replace("test.txt", "Hello", "Hi");
}