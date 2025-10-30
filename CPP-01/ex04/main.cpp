/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:46:04 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/30 13:49:14 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void err_parsing()
{
    std::cout << "\033[1;32m./Sed_is_for_losers\033[0m "
    << "\033[1;34m<filename>\033[0m "
    << "\033[1;33m\"S1\"\033[0m "
    << "\033[1;31m\"S2\"\033[0m\n";
}
int main(int ac, char *av[])
{
    Sed obj;
    if (ac == 4)
    {
        obj.setValues(av[1], av[2], av[3]);
        std::ifstream file(av[1]);
        std::string line;

        if(file.is_open())
        {
            std::getline(file, line, '\0');
            // ft_read_replace()
    
        }
        else
        {
            std::cout << "Error: could not open file." << std::endl;
            return 1;

        }
    }
    else
        err_parsing();
}



