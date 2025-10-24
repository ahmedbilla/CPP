#include "Zombie.hpp"



Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie *obj = new Zombie[N];
    // Zombie set = Zombie(name);

    while (i < N)
    {
        obj[i] = Zombie(name);
        i++;
    }
    
    return(obj);
}