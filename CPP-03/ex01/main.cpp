/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:18:14 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/15 10:02:44 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap obj("ahmed");
    ClapTrap obj1(obj);
    obj.attack("billa");
    obj.takeDamage(5);
    obj.beRepaired(5);
}