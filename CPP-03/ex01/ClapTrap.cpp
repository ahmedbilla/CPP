/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:34:03 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/22 00:08:14 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << Name << " constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string param) : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    Name = param;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << Name << " copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->Name = other.Name;
    this->HitPoint = other.HitPoint;
    this->EnergyPoint = other.EnergyPoint;
    this->AttackDamage = other.AttackDamage;
    std::cout << Name << " copy assignment operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (HitPoint > 0 && EnergyPoint > 0)
    {
        EnergyPoint -= 1;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage! " << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << Name << "can't attack because it has no hit points or energy left!" << std::endl;
        return;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)HitPoint)
    {
        std::cerr << "Error: The amount is out of int range!\n";
        return;
    }

    if (HitPoint >= 0)
    {
        if (HitPoint == 0)
        {
            std::cout << "ClapTrap " << Name << " has died." << std::endl;
            return;
        }
        else
        {
            HitPoint -= amount;
            std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > INT_MAX)
    {
        std::cerr << "Error: The amount is out of int range!\n";
        return;
    }
    if (HitPoint > 0 && EnergyPoint > 0)
    {
        EnergyPoint -= 1;
        HitPoint += amount;
        std::cout << "ClapTrap " << Name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << Name << " destructor is called" << std::endl;
}