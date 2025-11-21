/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:31:33 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/15 17:57:01 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    value = other.value;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = op.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &file, const Fixed &op)
{
    file << op.toFloat();
    return file;
}

Fixed::Fixed(const int number) : value(number << fractionalBits)
{
    std::cout << "int constracteur caled \n";
}

Fixed::Fixed(const float number) : value(roundf(number * (1 << fractionalBits)))
{
    std::cout << "float constracteur caled \n";
}

float Fixed::toFloat(void) const
{
    return (float)this->value / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return (this->value >> fractionalBits);
}