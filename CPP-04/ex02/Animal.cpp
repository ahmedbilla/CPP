/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:11:26 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 15:26:05 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Constructor " << type << " called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Copy Constructor " << type << " called" << std::endl;
}

Animal::Animal(std::string val) : type(val)
{
    
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << type << " copy assignment operator called" << std::endl;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Some animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

Animal::~Animal()
{
    std::cout << type << " destructor is called" << std::endl;
}