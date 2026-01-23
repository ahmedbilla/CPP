/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:21:55 by ahbilla           #+#    #+#             */
/*   Updated: 2026/01/22 12:39:09 by ahbilla          ###   ########.fr       */
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
    static int check_ischar(const std::string &param)
    {
        if (param.length() == 1 && !std::isdigit(param[0]))
            return 1;
        return 0;
    }
    static int check_isnumber(const std::string &number)
    {
        int i = 0;
        int result;
        if (number.empty())
            return 0;

        if (number[i] == '+' || number[i] == '-')
            i++;

        if (i == number.length())
            return 0;

        while (i < number.length())
        {
            if (!std::isdigit(number[i]))
                return 0;
            i++;
        }
        result = std::atoi(number.c_str());
        std::cout << "Result: " << result << std::endl;
        if (result > INT_MAX || result < INT_MIN)
            return 0;
        return 1;
    }
    static int check_isfloat(const std::string &number)
    {
        int i = 0;
        int dot_count = 0;

        if (number.empty())
            return 0;

        if (number[i] == '+' || number[i] == '-')
            i++;

        if (i == number.length())
            return 0;

        while (i < number.length())
        {
            if (number[i] == '.')
                dot_count++;
            else if (!std::isdigit(number[i]))
                return 0;
            i++;
        }
        if (dot_count != 1)
            return 0;
        return 1;
    }
    static int check_isdouble(const std::string &number)
    {
        int i = 0;
        int dot_count = 0;

        if (number.empty())
            return 0;

        if (number[i] == '+' || number[i] == '-')
            i++;

        if (i == number.length())
            return 0;

        while (i < number.length())
        {
            if (number[i] == '.')
                dot_count++;
            else if (!std::isdigit(number[i]))
                return 0;
            i++;
        }
        if (dot_count != 1)
            return 0;
        return 1;
    }
    static void convert(std::string param)
    {
        // if ((param.length() == 1) && (std::isdigit(param[0]) != 1))
        // {
        //     if (std::isprint(param[0]))
        //     {
        //         std::cout << "char: " << "'" << param << "'" << std::endl;
        //         std::cout << "int: " << static_cast<int>(param[0]) << std::endl;
        //     }
        //     else
        //         std::cout << "char: Non displayable" << std::endl;
        // }

        // else if (check_isnumber(param))
        // {

        //     std::cout << "int: " << param << std::endl;
        //     // std::cout
        // }
        std::cout << check_ischar(param) << std::endl;
        std::cout << check_isnumber(param) << std::endl;
        std::cout << check_isfloat(param) << std::endl;
        std::cout << check_isdouble(param) << std::endl;
    }
};

#endif
