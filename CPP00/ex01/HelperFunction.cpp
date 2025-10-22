/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HelperFunction.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:12:35 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/22 14:51:03 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GlobalHeader.hpp"

void print_headr()
{
    std::cout << std::setw(10) << "ID" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
}

std::string check_len(std::string str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    return str;
}

int is_just_space(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t')
            return 0;
        i++;
    }
    return 1;
}

int check_is_number(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (std::isdigit(str[i]) != 1)
            return 1;
        i++;
    }
    return 0;
}

int non_printable(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!(std::isprint(str[i])))
            return 0;
        i++;
    }
    return 1;
}

int check_printable(std::string &param)
{
    if (!non_printable(param))
        return 1;
    return 0;
}