/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:22:01 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 20:57:14 by ahbilla          ###   ########.fr       */
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
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j;
    delete i;

    Animal *arr[10];

    int k = 0;

    while (k < 10)
    {
        if (k % 2 == 0)
        {
            arr[k] = new Cat;
        }
        else
        {
            arr[k] = new Dog;
        }
        k++;
    }
    for (int k = 0; k < 10; k++)
    {
        std::cout << arr[k]->getType() << std::endl;
    }

    for (int k = 0; k < 10; k++)
    {
        delete arr[k];
    }
    //==========================Deep copy============================
    Dog obj1;
    Dog obj2;

    obj1.get_brain()->setideas(0, "Hello World");
    obj2 = obj1;
    std::cout << "=====================result befor========================\n";

    obj1.get_brain()->geter(0);
    obj2.get_brain()->geter(0);
    std::cout << "=========================================================\n";

    obj1.get_brain()->setideas(0, "its fake");

    std::cout << "=====================result after========================\n";
    obj1.get_brain()->geter(0);
    obj2.get_brain()->geter(0);
    std::cout << "=========================================================\n";

    return 0;
}