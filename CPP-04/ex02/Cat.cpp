/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:27:34 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 17:07:51 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Constructor " << type << " called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain();
    std::cout << "Copy Constructor " << type << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        brain = new Brain(*other.brain);
    }
    std::cout << type << " copy assignment operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Some Cat sound" << std::endl;
}

std::string Cat::getType() const
{
    return type;
}

Cat::~Cat()
{
    delete brain;
    std::cout << type << " destructor is called" << std::endl;
}