/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:07:57 by ahbilla           #+#    #+#             */
/*   Updated: 2025/12/14 15:14:24 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <exception>

class PresidentialPardonForm : public AForm
{
private:
    const std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string _target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    void execute(Bureaucrat const &executor) const;
    ~PresidentialPardonForm();
};

#endif