/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:11:23 by ahbilla           #+#    #+#             */
/*   Updated: 2025/09/28 17:11:24 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char *av[])
{
    char    res;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 1;
    }
    else if(ac > 2)
    {
        while(av[j])
        {
            i = 0;
            while (av[j][i])
            {
                res = std::toupper(av[j][i]);
                std::cout << res;
                i++;
            }
            j++;
        }   
        std::cout << std::endl;     
    }
}