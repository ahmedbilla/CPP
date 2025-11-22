/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:18:14 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/22 12:35:29 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ScavTrap obj("ahmed");
    ScavTrap obj1(obj);

    obj1.attack("billa");
    obj1.takeDamage(5);
    obj1.beRepaired(5);
}