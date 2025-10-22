/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:12:43 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/22 16:21:33 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GlobalHeader.hpp"
#include "PhoneBook.hpp"

void PhoneBook::add_contact(int id, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    arr[id % 8].set_name((id % 8), fn, ln, nn, pn, ds);
}
void PhoneBook::show_contacts(int id)
{
    if (id >= 8)
        id = 7;
    for (int i = 0; i <= id; i++)
    {
        arr[i].display_contact();
    }
}

void PhoneBook::search_contact(std::string index, int id)
{

    if (index.length() == 1)
    {
        int i = atoi(index.c_str());
        if(i <= id)
            print_headr();
        
        if ((i >= 0 && i <= id))
            arr[i].display_contact();
        else
            std::cout << "Error: Invalid index value.\n";
    }
    else
        std::cout << "Enter an index between 0 and 7\n";
}