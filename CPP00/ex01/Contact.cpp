/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:12:18 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/21 15:12:19 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GlobalHeader.hpp"
#include "Contact.hpp"

void Contact::set_name(int index, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{

    id = index;
    first_name = fn;
    last_name = ln;
    nickname = nn;
    phone_number = pn;
    Darkest_secret = ds;
}

void Contact::display_contact()
{

    std::cout << std::setw(10) << id << "|"
              << std::setw(10) << check_len(first_name) << "|"
              << std::setw(10) << check_len(last_name) << "|"
              << std::setw(10) << check_len(nickname) << std::endl;
}