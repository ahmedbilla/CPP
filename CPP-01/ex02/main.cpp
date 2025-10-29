/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:43:01 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/28 21:43:02 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout << "The memory address of the string: " <<"\033[32m" << &var << "\033[0m" << std::endl;
    std::cout << "The memory address of the string stringPTR: " <<"\033[32m" << stringPTR << "\033[0m" << std::endl;
    std::cout << "The memory address of the string stringREF: " <<"\033[32m" << &stringREF << "\033[0m" << std::endl;
    std::cout << "\033[33m-----------------------------------------------\033[0m\n";

    std::cout << "The value of the string: " <<"\033[32m" << var << "\033[0m" << std::endl;
    std::cout << "The value pointed to by stringPTR: " <<"\033[32m" << *stringPTR << "\033[0m"  << std::endl;
    std::cout << "The value pointed to by stringREF: " <<"\033[32m" << stringREF << "\033[0m" << std::endl;
}