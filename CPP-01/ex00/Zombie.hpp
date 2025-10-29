/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:10:20 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/28 18:10:21 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <memory>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    void announce(void);
    ~Zombie();
};


Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif