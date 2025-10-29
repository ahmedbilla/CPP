/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:52:09 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/29 17:47:59 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.h"

class HumanB
{
private:
    std::string name;
    Weapon *Weapo;

public:
    HumanB(std::string str);
    void attack();
    void setWeapon(Weapon &wp);
    ~HumanB();
};

#endif