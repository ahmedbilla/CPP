/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:52:38 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/12 17:46:40 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Unknown"), _signed(false), gradeSign(13), gradeExec(37)
{
    std::cout << "Default AForm Constructor is called" << std::endl;
}

AForm::AForm(const std::string n, const int s, const int e) : name(n), gradeSign(s), gradeExec(e)
{
    if(gradeSign < 1 || gradeExec < 1)
        throw AForm::GradeTooHighException();
    if(gradeSign > 150 || gradeExec > 150)
        throw AForm::GradeTooLowException();
    std::cout << "Parameterized AForm constructor is called" << std::endl;
}

AForm::AForm(const AForm &other) :name(other.name), gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{
    std::cout << "Copy AForm Constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    this->_signed = other._signed;
    return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm grade is too high";
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm grade is too low";
}

const char *AForm::FormNotSigned::what() const throw()
{
    return " AForm is not signed";
}

std::string AForm::getName() const
{
    return (name);
}

void AForm::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > gradeSign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

bool AForm::getSigned() const
{
    return (_signed);
}

int AForm::getGradeSign() const
{
    return (gradeSign);
}

int AForm::getGradeExec() const
{
    return (gradeExec);
}

std::ostream &operator<<(std::ostream &file, const AForm &obj)
{
    file << "Name :" << obj.getName() << "\nsigned :" << obj.getSigned() << "\ngradeSign :" << obj.getGradeSign() << "\ngradeExec :" << obj.getGradeExec() << std::endl;
    return file;
}

AForm::~AForm()
{
    std::cout << "Destructor AForm is called" << std::endl;
}