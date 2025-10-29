/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:07:38 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/29 17:55:16 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include "Weapon.h"

class Weapon
{
    private:
        std::string type;
    public:
    Weapon(std::string str); 
    const std::string &getType();
    void setType(std::string str);
    ~Weapon();
};

#endif