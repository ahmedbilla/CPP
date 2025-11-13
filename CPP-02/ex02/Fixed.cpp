/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:31:33 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/13 22:07:18 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->value = op.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number) : value(number << fractionalBits)
{
    // std::cout << "int constracteur caled \n";
}

Fixed::Fixed(const float number) : value(roundf(number * (1 << fractionalBits)))
{
    // std::cout << "float constracteur caled \n";
}

float Fixed::toFloat(void) const
{
    return (float)this->value / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return (this->value >> fractionalBits);
}

std::ostream &operator<<(std::ostream &file, const Fixed &op)
{
    file << op.toFloat();
    return file;
}

Fixed Fixed::operator*(const Fixed &op)
{
    Fixed res;
    res.value = (this->value * op.value) >> fractionalBits;
    return res;
}

Fixed Fixed::operator++(void)
{
    this->value++;
    return this->toFloat();
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp.value = this->value;
    this->value++;
    return tmp.toFloat();
}

Fixed Fixed::operator+(const Fixed &op) const
{
    Fixed res;
    res.value = this->value + op.value;
    return res;
}

Fixed Fixed::operator-(const Fixed &op) const
{
    Fixed res;
    res.value = this->value - op.value;
    return res;
}

Fixed Fixed::operator/(const Fixed &op)
{
    Fixed res;
    res.value = this->value / op.value << fractionalBits;
    return res;
}

int Fixed::operator>(const Fixed &op) const 
{
    if (this->value > op.value)
        return 1;
    return 0;
}

int Fixed::operator<(const Fixed &op) const
{
    if (this->value < op.value)
        return 1;
    return 0;
}

int Fixed::operator<=(const Fixed &op)
{
    if (this->value <= op.value)
        return 1;
    return 0;
}

int Fixed::operator>=(const Fixed &op)
{
    if (this->value >= op.value)
        return 1;
    return 0;
}

int Fixed::operator==(const Fixed &op)
{
    if (this->value == op.value)
        return 1;
    return 0;
}

int Fixed::operator!=(const Fixed &op)
{
    if (this->value != op.value)
        return 1;
    return 0;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
    if (a > b)
        return a;
    return b;
}