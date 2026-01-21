/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:03:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/21 13:45:44 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown") ,grade(13)
{
    std::cout << "Default Constructor is called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name) , grade(_grade)
{
    if(grade < 1)
    {
        throw GradeTooHighException();
    }
    else if(grade > 150)
    {
        throw GradeTooLowException();
    }
    else
        grade = _grade;
    std::cout << "Parameterized constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    *this = other;
    std::cout << "Copy Constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->grade = other.grade;
    std::cout <<"copy assignment operator called" << std::endl;
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

const char *Bureaucrat::GradeTooHighException::what()
{
    return("Grade to high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade to low\n");
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
    if(grade > 150)
    {
        throw GradeTooLowException();
    }
}
std::ostream &operator<<(std::ostream &file, const Bureaucrat &obj)
{
    file << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (file);
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor is called" << std::endl;
}