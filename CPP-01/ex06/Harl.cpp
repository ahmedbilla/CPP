/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:07:30 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/31 16:33:27 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears, whereas you started working here just last month." << std::endl << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (i < 4 && levels[i] != level)
        i++;
    
    switch(i)
    {
        case 0:
            std::cout << "[ DEBUG ]\n";
            this->debug();
        case 1:
            std::cout << "[ INFO ]\n";
            this->info();
        case 2:
            std::cout << "[ WARNING ]\n";
            this->warning();
        case 3:
            std::cout << "[ ERROR ]\n";
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

Harl::~Harl()
{
} 