/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 23:56:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/22 00:07:42 by ahbilla          ###   ########.fr       */
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