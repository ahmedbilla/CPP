/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:53:55 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/26 18:51:44 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{

    public:
        Dog();
        Dog (const Dog &other);
        Dog &operator=(const Dog &other);
        void makeSound() const;
        std::string getType() const;
        ~Dog();
};

#endif