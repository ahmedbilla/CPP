/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:21:55 by ahbilla           #+#    #+#             */
/*   Updated: 2026/01/21 20:19:39 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <cstdlib>
class ScalarConverter
{
    private:
        // ScalarConverter(){}
        // ScalarConverter(const ScalarConverter &other){}
        // ScalarConverter &operator=(const ScalarConverter &other){}
        // ~ScalarConverter(){}
    public:
        static void convert(std::string param)
        {
            if((param.length() == 1) && (std::isdigit(param[0])!= 1))
            {
                if(std::isprint(param[0]))
                {
                    std::cout << "char: " << param << std::endl;
                    std::cout << "int: " << static_cast<int>(param[0]) << std::endl;
                }
                else
                    std::cout<< "char: Non displayable" <<std::endl;
            }
        }
};

#endif
