/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:03:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/04 17:39:01 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
    if (grade < 1 && grade >150)
    {
        throw 1;
    }   
    std::cout << "Constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor is called" << std::endl;
}