/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:57:32 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/14 15:09:46 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : AForm(), target("Unknown")
{
    std::cout << "Default Robotomy Constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target) : AForm("Robotomy", 72, 45), target(_target)
{
    std::cout << "Parameterized Robotomy constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("Robotomy", 72, 45), target(other.target)
{
    std::cout << "Copy Robotomy Constructor called" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    std::cout << "copy Robotomy assignment operator called" << std::endl;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    static int per = 1;
    if (!getSigned())
        throw AForm::FormNotSigned();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    if (per)
    {
        std::cout << "🤖 * Bzzzz... Vrrrr... * 🤖\n"
                  << target << " has been robotomized successfully!"
                  << std::endl;
    }
    else
    {
        std::cout << "🤖 * Bzzzz... Clank! * 🤖\n"
                  << "Robotomy failed on " << target << "."
                  << std::endl;
    }
    per = !per;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor Robotomy is called" << std::endl;
}