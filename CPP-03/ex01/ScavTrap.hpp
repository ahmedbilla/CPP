/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:13:36 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/22 12:29:43 by ahbilla          ###   ########.fr       */
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
        std::cout << Name << " ScavTrap constructor is called" << std::endl;
    }
    ScavTrap(std::string parm) : ClapTrap(parm) 
    {
        HitPoint= 100 ;
        EnergyPoint =50;
        AttackDamage = 20;
        std::cout << Name << " ScavTrap parametrize constructor is called" << std::endl;
    }
    void attack(const std::string &target);
    void guardGate()
    {
        std::cout << Name << " is in Gate Keeper mode" << std::endl;
    }
    ScavTrap(const ScavTrap &other) : ClapTrap(other)
    {
        // *this = other;
        std::cout << Name << " ScavTrap copy constructor called" << std::endl;
    }

    ScavTrap &operator=(const ScavTrap &other)
    {
        (ClapTrap::operator=(other));
        std::cout << Name << " ScavTrap copy assignment operator called" << std::endl;
        return *this;
    }

    ~ScavTrap()
    {
    }
};

#endif