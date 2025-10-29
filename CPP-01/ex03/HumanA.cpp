/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:28:56 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/29 17:51:22 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

HumanA::HumanA(std::string str, Weapon &club) : Weapo(club)
{
    name = str;  
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << Weapo.getType() << std::endl;
} 
HumanA::~HumanA()
{   
}