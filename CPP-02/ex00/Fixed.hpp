/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:43:40 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/02 23:45:04 by ahbilla          ###   ########.fr       */
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
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &op);
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        ~Fixed();
};

#endif