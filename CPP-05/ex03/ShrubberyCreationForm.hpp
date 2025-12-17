/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:21:29 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/14 15:39:57 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <exception>


class ShrubberyCreationForm : public AForm
{
    private:
       const std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string _target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        void execute(Bureaucrat const &executor) const;
        ~ShrubberyCreationForm();
};

#endif