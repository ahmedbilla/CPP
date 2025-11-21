/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:13:36 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/22 00:07:54 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap() : ClapTrap()
    {
        HitPoint= 100 ;
        EnergyPoint =50;
        AttackDamage = 20;
    }
    ScavTrap(std::string parm) : ClapTrap(parm) 
    {
        HitPoint= 100 ;
        EnergyPoint =50;
        AttackDamage = 20;
    }
    void attack(const std::string &target);
    void guardGate()
    {
        std::cout << Name << " is in Gate Keeper mode" << std::endl;
    }
    ScavTrap(const ScavTrap &other) : ClapTrap(other)
    {
        *this = other;
        std::cout << Name << " copy constructor called" << std::endl;
    }

    ScavTrap &operator=(const ScavTrap &other)
    {
        // (ClapTrap::operator=(other));
            this->Name = other.Name;
    this->HitPoint = other.HitPoint;
    this->EnergyPoint = other.EnergyPoint;
    this->AttackDamage = other.AttackDamage;
    std::cout << Name << " copy assignment operator called" << std::endl;
    return *this;
        std::cout << Name << " copy assignment operator called" << std::endl;
        return *this;
    }

    ~ScavTrap()
    {
    }
};

#endif