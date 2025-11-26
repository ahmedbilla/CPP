/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:22:01 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/26 22:53:28 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    const WrongAnimal *cc = new WrongCat();

    
    // Animal a;
    // Animal a1(a);
    // Cat b;
    // Cat b1(b);
    // Dog c;
    // Dog c1(c);
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    // std::cout << "\n-------------------------------\n";
    
    std::cout << cc->getType() << " " << std::endl; 
    cc->makeSound();
    
    delete meta;
    delete i;
    delete j;
    delete cc;

    return 0;
}