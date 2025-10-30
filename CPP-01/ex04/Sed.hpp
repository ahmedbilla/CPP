/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:45:08 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/30 14:08:09 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
void err_parsing();

class Sed
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Sed();
        void setValues(std::string file, std::string str1, std::string str2);
        std::string getValue(std::string type_return);
        ~Sed();
};

#endif