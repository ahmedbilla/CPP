/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:53:55 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 17:08:37 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain *brain;       
    public:
        Dog();
        Dog (const Dog &other);
        Dog &operator=(const Dog &other);
        void makeSound() const;
        std::string getType() const;
        ~Dog();
};

#endif