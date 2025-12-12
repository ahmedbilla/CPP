/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:53:20 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/12 17:53:33 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat alex("alex", 136);
        ShrubberyCreationForm shrubbery("alex"); 
        alex.signForm(shrubbery);
        shrubbery.execute(alex); 
        
        std::cout <<"========================\n";

        Bureaucrat jon("jon", 146);
        ShrubberyCreationForm shrubb_jon("jon");
        jon.signForm(shrubb_jon);
        shrubb_jon.execute(jon);
    }
    catch(const std::exception &e)
    {
        std::cout << "exception" << e.what() << std::endl;
    }
    
}