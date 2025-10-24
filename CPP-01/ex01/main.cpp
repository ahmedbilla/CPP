#include "Zombie.hpp"

int main()
{
    int N = 3;
    int i = 0;
    Zombie *obj =  zombieHorde(N, "AHMED");

    while (i < N)
    {
        obj[i].announce();
        i++;
    }
    
    obj->announce();
    delete[] obj;
}