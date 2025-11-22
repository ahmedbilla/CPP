/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 23:56:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/22 13:29:00 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string &target)
{
    if (HitPoint > 0 && EnergyPoint > 0)
    {
        EnergyPoint -= 1;
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage! " << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << Name << "can't attack because it has no hit points or energy left!" << std::endl;
        return;
    }
}

ScavTrap::ScavTrap() : ClapTrap()
{
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << Name << " ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string parm) : ClapTrap(parm)
{
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << Name << " ScavTrap parametrize constructor is called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << Name << " is in Gate Keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << Name << " ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    (ClapTrap::operator=(other));
    std::cout << Name << " ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << Name << " ScavTrap destructor is called" << std::endl;
}