/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:12:38 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/28 13:52:32 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GlobalHeader.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

void check_eof()
{
    if (std::cin.eof())
        std::exit(1);
}

void check_empty_and_space(std::string &param, std::string out)
{
    while ((param).empty() || is_just_space(param) || check_printable(param))
    {
        std::cerr << "No empty/non-printable allowed\n";
        std::cout << out;
        std::getline(std::cin, param);
        check_eof();
    }
}

int main()
{
    Contact personel_info;
    PhoneBook prv;

    std::string chois;
    int id = -1;
    std::string fn;
    std::string ln;
    std::string nn;
    std::string pn;
    std::string ds;

    while (1)
    {
        std::string prv_info;
        std::string index;
        std::cout << "Please enter a command. (ADD, SEARCH OR EXIT) :";
        std::getline(std::cin, chois);
        check_eof();
        if (chois == "ADD")
        {
            ++id;
            std::cout << "First name : ";
            std::getline(std::cin, fn);
            check_empty_and_space(fn, "First name : ");
            check_eof();

            std::cout << "Last name : ";
            std::getline(std::cin, ln);
            check_empty_and_space(ln, "Last name : ");
            check_eof();

            std::cout << "Nickname : ";
            std::getline(std::cin, nn);
            check_empty_and_space(nn, "Nickname : ");
            check_eof();

            std::cout << "Phone number : ";
            std::getline(std::cin, pn);
            while (check_is_number(pn) || pn.empty() || is_just_space(pn) || check_printable(pn))
            {

                std::cerr << "Phone number must be digits and not empty" << std::endl;
                std::cout << "Phone number : ";
                std::getline(std::cin, pn);
                check_eof();
            }
            check_eof();

            std::cout << "Darkest secret : ";
            std::getline(std::cin, ds);
            check_empty_and_space(ds, "Darkest secret : ");
            check_eof();

            prv.add_contact(id, fn, ln, nn, pn, ds);
        }
        else if (chois == "SEARCH")
        {
            if (id != -1)
            {
                print_headr();
                prv.show_contacts(id);
                std::cout << "Please select an index : ";
                std::getline(std::cin, index);
                while(check_is_number(index))
                {
                    std::cerr << "Index must be numeric only." << std::endl;
                    std::cout << "Please select an index : ";
                    std::getline(std::cin, index);
                    check_eof();
                }
                check_eof();
                prv.search_contact(index, id);
            }
            else
                std::cerr << "Error: Phonebook is empty.\n";
        }
        else if (chois == "EXIT")
            return 0;
        else
            std::cerr << "Command not found\n";
    }
}