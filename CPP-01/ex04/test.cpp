#include <fstream>
#include <iostream>
#include <string>
int main()
{
    std::ifstream file("tessst.txt");
    std::string line;

    if(file.is_open())
    {
        while(getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.close();
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}