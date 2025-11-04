/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:31:38 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/04 14:47:41 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const int number) : value(number << fractionalBits)
    {
    }
    Fixed(const float number) : value(roundf(number * (1 << fractionalBits)))
    {
    }
    float Fixed::toFloat(void) const
    {
        return (float)this->value / (1 << fractionalBits);
    }
     int toInt( void ) const
     {
        
     }
    // Fixed(const Fixed &other);
    // Fixed &operator=(const Fixed &op);
    // int getRawBits( void ) const;
    // void setRawBits( int const raw);
    ~Fixed();
};

#endif