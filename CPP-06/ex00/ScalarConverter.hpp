/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:21:55 by ahbilla           #+#    #+#             */
/*   Updated: 2026/01/23 17:58:40 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <cstdlib>
#include <climits>
#include <sstream>

class ScalarConverter
{
private:
    // ScalarConverter(){}
    // ScalarConverter(const ScalarConverter &other){}
    // ScalarConverter &operator=(const ScalarConverter &other){}
    // ~ScalarConverter(){}
public:

    static std::string pseudo_literals(std::string literals, std::string option)
    {
        std::string rtr;
        if (literals == "-inff" || literals == "-inf")
        {
            if (option == "float")
                rtr = "-inff";
            else if(option == "double")
                rtr = "-inf";
        }
        else if (literals == "+inff" || literals == "+inf")
        {
            if (option == "float")
                rtr = "+inff";
            else if(option == "double")
                rtr = "+inf";
        }
        else if (literals == "nanf" || literals == "nan")
        {
            if (option == "float")
                rtr = "nanf";
            else if(option == "double")
                rtr = "nan";
        }
        
        return rtr;
    }
    static int check_ischar(const std::string &param)
    {
        if(param == "nan" || param == "-inff" || param == "+inff" || param == "nanf" || param =="-inf" || param == "+inf" || param == "inf" || param == "inff")
        {
            std::cout << "char: impossible" << std::endl;
            return 3;
        }
        if (param.length() == 1 && !std::isdigit(param[0]))
            return 1;
        return 0;
    }
    static int check_isnumber(const std::string &number)
    {
        int i = 0;
        long result;
        if(number == "nan" || number == "-inff" || number == "+inff" || number == "nanf" || number =="-inf" || number == "+inf" || number == "inf" || number == "inff")
        {
            std::cout << "int: impossible" << std::endl;
            return 3;
        }
        if (number.empty())
            return 0;
        if (number[i] == '+' || number[i] == '-')
            i++;

        if (i == number.length())
            return 0;
        std::stringstream ss(number);
        ss >> result;
        if (result > INT_MAX || result < INT_MIN)
            return 0;
        while (i < number.length())
        {
            if (!std::isdigit(number[i]))
                return 0;
            i++;
        }
        return 1;
    }
    static int check_isfloat(const std::string &number)
    {
        int i = 0;
        int dot_count = 0;
        std::string res;
        
        if (number == "-inff" || number == "-inf" || number == "+inff" || number == "+inf" || number == "nanf" || number == "nan")
        {
            res = pseudo_literals(number, "float");
            std::cout << "float: " << res << std::endl;
            return 3;
        }
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
        std::string res;
        int flag = 0;

        if (number == "-inff" || number == "-inf" || number == "+inff" || number == "+inf" || number == "nanf" || number == "nan")
        {
            if (flag == 1)
                return 3;
            res = pseudo_literals(number, "double");
            std::cout << "double: " << res << std::endl;
            flag = 1;
            return 3;
        }
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
    static int check_isprint(int value)
    {
        if (value < 0 || value > 255)
            return 2;
        if (value >= 32 && value <= 126)
        {
            return 1;
        }
        return 0;
    }
    static void convert(std::string param)
    {
        if (check_ischar(param) == 1)
        {
            std::cout << "char: " << "'" << param << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(param[0]) << std::endl;
            std::cout << "float: " << static_cast<float>(param[0]) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(param[0]) << ".0" << std::endl;
        }
        else if (check_isnumber(param) == 1)
        {
            int result;
            std::stringstream ss(param);
            ss >> result;
            if (check_isprint(result) == 1)
                std::cout << "char: '" << static_cast<char>(result) << "'" << std::endl;
            else if (check_isprint(result) == 2)
                std::cout << "char: impossible" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << param << std::endl;
            std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
        }

        else if (check_isfloat(param) == 1)
        {
            float result;
            std::stringstream ss(param);
            ss >> result;
            if (check_isprint(result) == 1)
                std::cout << "char: '" << static_cast<char>(result) << "'" << std::endl;
            else if (check_isprint(result) == 2)
                std::cout << "char: impossible" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << static_cast<int>(result) << std::endl;
            std::cout << "float: " << result << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(result) << std::endl;
        }
        else if (check_isdouble(param) == 1)
        {
            double result;
            std::stringstream ss(param);
            ss >> result;
            if (check_isprint(result) == 1)
                std::cout << "char: '" << static_cast<char>(result) << "'" << std::endl;
            else if (check_isprint(result) == 2)
                std::cout << "char: impossible" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << static_cast<int>(result) << std::endl;
            std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
            std::cout << "double: " << result << std::endl;
        }
        // else if(param == "nan")
        // {
        //     std::cout << "char: impossible" << std::endl;
        //     std::cout << "int: impossible" << std::endl;
        //     std::cout << "float: nanf" << std::endl;
        //     std::cout << "double: nan" << std::endl;
        // }
        else if(check_isdouble(param) == 3)
            return ;
        else
        {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
                std::cout << "float: impossible" << std::endl;
                std::cout << "double: impossible" << std::endl;
        }
        
    }
};

#endif
