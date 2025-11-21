/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:18:14 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/22 00:08:40 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ScavTrap obj("ahmed");
    ScavTrap obj1(obj);
    obj.attack("billa");
    obj.takeDamage(5);
    obj.beRepaired(5);
}