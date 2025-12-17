/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:12:14 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/12 17:24:29 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), target("Unknown")
{
    std::cout << "Default Shrubbery Constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) : AForm("Shrubbery", 145, 137), target(_target)
{
    std::cout << "Parameterized Shrubbery constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("Shrubbery", 145, 137), target(other.target)
{
    std::cout << "Copy Shrubbery Constructor called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    std::cout << "copy Shrubbery assignment operator called" << std::endl;
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!getSigned())
        throw AForm::FormNotSigned();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    std::string Newfile = target + "_shrubbery";
    std::ofstream file(Newfile.c_str());
    
    if(file.is_open())
    {      
        file << "        &&& &&  & &&\n";
        file << "    && &\\/&\\|& ()|/ @, &&\n";
        file << "    &\\/(/&/&||/& /_/)_&/_&\n";
        file << " &() &\\/&|()|/&\\/ '%\" & ()\n";
        file << " &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
        file << "&&   && & &| &| /& & % ()& /&&\n";
        file << " ()&_---()&\\&\\|&&-&&--%---()~\n";
        file << "     &&     \\|||\n";
        file << "             |||\n";
        file << "             |||\n";
        file << "             |||\n";
        file << "       , -=-~  .-^- _\n";
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor Shrubbery is called" << std::endl;
}