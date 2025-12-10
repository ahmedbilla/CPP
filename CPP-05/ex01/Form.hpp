/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:52:44 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/10 17:21:43 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool _signed;
        const int gradeSign;
        const int gradeExec;
    public:
    Form();
    Form(const std::string n, const int s, const int e);
    Form  (const Form &other);
    Form &operator=(const Form &other);
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
    ~Form();
};
std::ostream &operator<<(std::ostream &file, const Form &obj);

#endif