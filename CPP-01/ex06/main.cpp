/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:08:24 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/31 16:19:43 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void parce_err()
{
    std::cerr << "\033[1;32m./harlFilter\033[0m "
              << "\033[1;34m<Level>\033[0m" << std::endl;
}
int main(int ac, char *av[])
{
    Harl obj;
    if (ac == 2)
    {
        std::string level= av[1];
        obj.complain(level);
    }
    else
        parce_err();
}