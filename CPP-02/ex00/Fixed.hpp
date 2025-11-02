/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:43:40 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/02 23:00:01 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed() : value(0)
        {
            std::cout << "Default constructor called" << std::endl;
        }
        Fixed(const Fixed &other)
        {
            std::cout << "Copy constructor called" << std::endl;
            *this = other;
        }
        Fixed &operator=(const Fixed &op)
        {
            if (this != &op)
		this->value = op.getRawBits();
            std::cout << "Copy assignment operator called" << std::endl;
            return *this;
        }
        int getRawBits( void ) const
        {
            std::cout << "getRawBits member function called" << std::endl;
            return value;
        }
        void setRawBits( int const raw )
        {
            this->value = raw;
        }
        ~Fixed()
        {
            std::cout << "Destructor called" << std::endl;
        }
};
 
#endif