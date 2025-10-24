#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie()
    {
        std::cout << "Default Constructor is called " << name << std::endl;
    }
    Zombie(std::string name) : name(name)
    {
        std::cout << "Constructor is called " << name << std::endl;
    }
    void announce()
    {
        std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
    }
    ~Zombie()
    {
        std::cout << "Destructor is called " << name << std::endl;
    }
};
Zombie* zombieHorde( int N, std::string name );
#endif