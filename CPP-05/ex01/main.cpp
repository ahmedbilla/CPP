/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:53:20 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/10 17:31:21 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat alex("alex", 13);
        Form joen("Form", 13, 37);
        
        std::cout << joen << std::endl;

        alex.signForm(joen);

        std::cout << "================================\n";

        Bureaucrat frank("frank", 15);
        Form harry("hary", 10, 1);

        std::cout << harry << std::endl;

        frank.signForm(harry);
    }
    catch(const std::exception& e)
    {
        std::cout << "exception" << e.what() << std::endl;
    }
    
}