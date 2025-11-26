/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:52:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/26 23:20:39 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *value;
    public:
        Cat();
        Cat (const Cat &other);
        Cat &operator=(const Cat &other);
        void makeSound()  const;
        std::string getType() const;
        ~Cat();
};

#endif