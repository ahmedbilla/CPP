#include "Zombie.hpp"

int main()
{
    Zombie *obj = newZombie("Foo");
    obj->announce();
    randomChump("Zoo");
    delete obj;
}