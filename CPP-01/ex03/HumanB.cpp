/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:41:07 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/29 17:50:58 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

HumanB::HumanB(std::string str)
{
    Weapo = NULL;
    name = str;
}

void HumanB::attack()
{
    if(Weapo)
        std::cout << name << " attacks with their " << Weapo->getType() << std::endl;
    else
    {
        std::cout << "dont have a Weapon" << std::endl;
    }
} 
void HumanB::setWeapon(Weapon &wp)
{
    Weapo = &wp;
}
HumanB::~HumanB()
{
}
