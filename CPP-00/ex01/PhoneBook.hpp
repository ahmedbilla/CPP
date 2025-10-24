/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:12:46 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/22 11:18:52 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOk_HPP
# define PHONEBOOk_HPP

#include "GlobalHeader.hpp"
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact arr[8];

    public:
        void add_contact(int id, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
        void show_contacts(int id);
        void search_contact(std::string index, int id);
};

#endif