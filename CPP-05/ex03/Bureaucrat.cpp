/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:03:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/17 11:13:19 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>

Bureaucrat::Bureaucrat() : name("Unknown"), grade(13)
{
    std::cout << "Default Bureaucrat Constructor is called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw GradeTooLowException();
    }
    else
        grade = _grade;
    std::cout << "Parameterized Bureaucrat constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    *this = other;
    std::cout << "Copy Bureaucrat Constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->grade = other.grade;
    std::cout << "copy Bureaucrat assignment operator called" << std::endl;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low\n");
}

void Bureaucrat::incrementGrade()
{
    grade--;
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade()
{
    grade++;
    if (grade > 150)
    {
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &file, const Bureaucrat &obj)
{
    file << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (file);
}


void Bureaucrat::signForm(AForm &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << name << " signed " << obj.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << " couldn't sign " << obj.getName()
        << " because " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Bureaucrat is called" << std::endl;
}