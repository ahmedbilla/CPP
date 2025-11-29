/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:22:01 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 18:07:17 by ahbilla          ###   ########.fr       */
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
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;

Animal arr[10];

int k = 0;

while (k < 10)
{
    if(k % 2 == 0)
    {
        arr[k] = Cat();
    }
    else
        arr[k] = Dog();
    k++;
}

return 0;
}