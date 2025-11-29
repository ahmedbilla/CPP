/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:50:50 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 15:30:50 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Constructor " << type << " called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Copy Constructor " << type << " called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
        Animal::operator=(other);
    std::cout << type << " copy assignment operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Some Dog sound" << std::endl;
}

std::string Dog::getType() const
{
    return type;
}

Dog::~Dog()
{
    std::cout << type << " destructor is called" << std::endl;
}