/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:26:30 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/29 17:42:41 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.h"

class HumanA
{
    private:
        std::string name;
        Weapon &Weapo;
    public:
        HumanA(std::string str, Weapon &club);
        void attack();
        ~HumanA();
};

#endif