/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:08:02 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/14 15:23:50 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm(), target("Unknown")
{
    std::cout << "Default Presidential Constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : AForm("Presidential", 25, 5), target(_target)
{
    std::cout << "Parameterized Presidential constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("Presidential", 25, 5), target(other.target)
{
    std::cout << "Copy Presidential Constructor called" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    std::cout << "copy Presidential assignment operator called" << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!getSigned())
        throw AForm::FormNotSigned();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    std::cout  << target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor Presidential is called" << std::endl;
}