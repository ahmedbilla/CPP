/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:38:01 by ahbilla           #+#    #+#             */
/*   Updated: 2026/01/21 20:14:23 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>


int main(int ac ,char *av[])
{

    std::string param;
    if(ac == 2)
    {
        param = av[1];
        
        ScalarConverter::convert(param);
    }
    else
        std::cout << "./convert param \n";
}