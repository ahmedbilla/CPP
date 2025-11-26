/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 13:46:13 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/23 15:16:01 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"



FragTrap::FragTrap() : ClapTrap()
{
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << Name << " FragTrap constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string parm) : ClapTrap(parm)
{
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << Name << " FragTrap parametrize constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << Name << " FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    (ClapTrap::operator=(other));
    std::cout << Name << " FragTrap copy assignment operator called" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high-fives" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << Name << " FragTrap destructor is called" << std::endl;
}