/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:11:10 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/28 21:23:43 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default Constructor is called " << name << std::endl;
}
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Constructor is called " << name << std::endl;
}
void Zombie::announce()
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Destructor is called " << name << std::endl;
}