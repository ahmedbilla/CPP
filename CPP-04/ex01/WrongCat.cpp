/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:14:44 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 15:41:47 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Constructor " << type << " called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "Copy Constructor " << type << " called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << type << " copy assignment operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Some WrongCat sound" << std::endl;
}

std::string WrongCat::getType() const
{
    return type;
}

WrongCat::~WrongCat()
{
    std::cout << type << " destructor is called" << std::endl;
}