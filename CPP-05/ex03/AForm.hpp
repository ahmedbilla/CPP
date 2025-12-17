/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:52:44 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/12 17:46:54 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool _signed;
        const int gradeSign;
        const int gradeExec;
    public:
    AForm();
    AForm(const std::string n, const int s, const int e);
    AForm  (const AForm &other);
    AForm &operator=(const AForm &other);
    std::string getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getGradeExec() const;
    
    void beSigned(const Bureaucrat &obj);
    
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class FormNotSigned : public std::exception
    {
        public:
            const char *what() const throw();
    };
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual ~AForm();
};
std::ostream &operator<<(std::ostream &file, const AForm &obj);

#endif