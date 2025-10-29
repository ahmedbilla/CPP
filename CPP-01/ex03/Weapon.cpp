/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:51:47 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/29 17:56:32 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string str)
{
    type = str;
}
const std::string& Weapon::Weapon::getType()
{
    const std::string & retur_type = type;
    return retur_type;
}
void Weapon::setType(std::string str)
{
    type = str;
}
Weapon::~Weapon()
{
}