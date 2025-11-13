/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:31:38 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/13 22:07:14 by ahbilla          ###   ########.fr       */
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
    static const int fractionalBits;

public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    float toFloat(void) const;
    int toInt(void) const;
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &op);
    Fixed operator*(const Fixed &op);
    Fixed operator++(void);
    Fixed operator++(int);
    Fixed operator+(const Fixed &op) const;
    Fixed operator-(const Fixed &op) const;
    Fixed operator/(const Fixed &op);
    int operator>(const Fixed &op) const;
    int operator<(const Fixed &op) const ;
    int operator<=(const Fixed &op);
    int operator>=(const Fixed &op);
    int operator==(const Fixed &op);
    int operator!=(const Fixed &op);
    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};
std::ostream &operator<<(std::ostream &file, const Fixed &op);

#endif