#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Constructor is called " << name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor is called " << name << std::endl;
}