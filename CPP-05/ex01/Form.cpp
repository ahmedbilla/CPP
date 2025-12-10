/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:52:38 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/10 17:21:55 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Unknown"), _signed(false), gradeSign(13), gradeExec(37)
{
    std::cout << "Default Constructor is called" << std::endl;
}

Form::Form(const std::string n, const int s, const int e) : name(n), gradeSign(s), gradeExec(e)
{
    if(gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    if(gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &other) :name(other.name), gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{
    std::cout << "Copy Constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    this->_signed = other._signed;
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade is too high";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade is too low";
}

std::string Form::getName() const
{
    return (name);
}

void Form::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > gradeSign)
        throw Form::GradeTooLowException();
    _signed = true;
}

bool Form::getSigned() const
{
    return (_signed);
}

int Form::getGradeSign() const
{
    return (gradeSign);
}

int Form::getGradeExec() const
{
    return (gradeExec);
}

std::ostream &operator<<(std::ostream &file, const Form &obj)
{
    file << "Name :" << obj.getName() << "\nsigned :" << obj.getSigned() << "\ngradeSign :" << obj.getGradeSign() << "\ngradeExec :" << obj.getGradeExec() << std::endl;
    return file;
}

Form::~Form()
{
    std::cout << "Destructor is called" << std::endl;
}