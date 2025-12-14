/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:53:20 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/14 15:42:34 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        // Shrubbery====================================
        Bureaucrat alex("alex", 136);
        ShrubberyCreationForm shrubbery("alex");
        alex.signForm(shrubbery);
        shrubbery.execute(alex);

        std::cout << "========================\n";

        // Bureaucrat jon("jon", 146);
        // ShrubberyCreationForm shrubb_jon("jon");
        // jon.signForm(shrubb_jon);
        // shrubb_jon.execute(jon);

        // Robotomy====================================
        Bureaucrat Oliver("Oliver", 44);
        RobotomyRequestForm Robotomy("Oliver");
        Oliver.signForm(Robotomy);
        Robotomy.execute(Oliver);

        std::cout << "========================\n";

        // Bureaucrat Michael("Michael", 48);
        // RobotomyRequestForm Robotomy_Michael("Michael");
        // Michael.signForm(Robotomy_Michael);
        // Robotomy_Michael.execute(Michael);

        // Presidential====================================

        Bureaucrat Robert("Robert", 4);
        PresidentialPardonForm Presidential("Robert");
        Robert.signForm(Presidential);
        Presidential.execute(Robert);

        std::cout << "========================\n";

        // Bureaucrat Henry("Henry", 8);
        // PresidentialPardonForm Presidential_Henry("Henry");
        // Henry.signForm(Presidential_Henry);
        // Presidential_Henry.execute(Henry);
    }
    catch (const std::exception &e)
    {
        std::cout << "exception" << e.what() << std::endl;
    }
}