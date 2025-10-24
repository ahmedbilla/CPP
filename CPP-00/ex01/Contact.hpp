/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:12:29 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/22 11:27:41 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "GlobalHeader.hpp"
#include "Contact.hpp"

class Contact
{
    private:
        int id;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string Darkest_secret;

    public:
        void set_name(int index, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
        void display_contact();
};


#endif