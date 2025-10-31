/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:34:42 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/31 13:57:03 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed()
{
}

void Sed::setValues(std::string file, std::string str1, std::string str2)
{
    filename = file;
    s1 = str1;
    s2 = str2;
}

std::string Sed::getValue(std::string type_return)
{
    if (type_return == "filename")
        return filename;
    else if (type_return == "s1")
        return s1;
    else if (type_return == "s2")
        return s2;
    return ("Error\n");
}
Sed::~Sed()
{
}