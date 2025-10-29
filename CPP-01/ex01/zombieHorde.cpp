/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:42:25 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/28 21:42:26 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cerr << "N must be greater than 0" << std::endl;
        std::exit(1);
    }
    int i = 0;
    Zombie *obj = new Zombie[N];

    while (i < N)
    {
        obj[i] = Zombie(name);
        i++;
    }
    
    return(obj);
}