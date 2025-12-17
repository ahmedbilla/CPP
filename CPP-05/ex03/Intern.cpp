/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:52:59 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/17 11:53:37 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
      std::cout << "Default Intern Constructor is called" << std::endl;
}

Intern::Intern (const Intern &other)
{
    *this = other; 
}

Intern &Intern::operator=(const Intern &other)
{
    if(this != &other)
         std::cout << "copy Intern assignment operator called" << std::endl;
    return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    while(i < 3 && form[i] != name)
        i++;
    // try
    // {
        switch(i)
        {
            case 0:
                std::cout << "Intern creates" << name << " " << target << std::endl;
                return new ShrubberyCreationForm(target);
            case 1:
                std::cout << "Intern creates" << name << " " << target << std::endl;
                return new RobotomyRequestForm(target);
            case 2:
                std::cout << "Intern creates" << name << " " << target << std::endl;
                return new PresidentialPardonForm(target);
            default:
                throw (std::runtime_error("the name not found."));
        }
    // }
    // catch (const std::exception &e)
    // {
    //     std::cout << "exception" << e.what() << std::endl;
    // }
    return NULL;
}

Intern::~Intern()
{
    std::cout << "Destructor Intern is called" << std::endl;
}