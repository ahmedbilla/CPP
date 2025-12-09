/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:53:20 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/08 14:36:54 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "-------------------------------\n";
    try
    {
        Bureaucrat obj("joen", 2);
        std::cout << obj << std::endl;

        obj.incrementGrade();
        std::cout << obj << std::endl;

        obj.incrementGrade();
        std::cout << obj << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "exception res incrementGrade:" << e.what();
    }

    std::cout << "-------------------------------\n";
    try
    {
        Bureaucrat obj1("dowe", 149);
        std::cout << obj1 << std::endl;

        obj1.decrementGrade();
        std::cout << obj1 << std::endl;

        obj1.decrementGrade();
        std::cout << obj1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "exception res decrementGrade: " << e.what();
    }
}