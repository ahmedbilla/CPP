/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:00:04 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 16:15:48 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructer Called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Copy Constructor Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        int i = 0;
        while (i <  100)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        } 
    }
    std::cout << "copy assignment Brain operator called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructer Called" << std::endl;
}