/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:09:45 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/26 22:11:00 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Constructor " << type << " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "Copy Constructor " << type << " called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.type;
    std::cout << type << " copy assignment operator called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << type << " destructor is called" << std::endl;
}