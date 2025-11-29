/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:52:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 16:29:52 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat (const Cat &other);
        Cat &operator=(const Cat &other);
        void makeSound()  const;
        std::string getType() const;
        ~Cat();
};

#endif