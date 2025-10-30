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
#include <string>

int ft_read_replace(std::string &line, Sed &obj)
{
    std::string NewFile = obj.getValue("filename") + ".replace";
    std::ofstream file(NewFile.c_str());
    if (!file.is_open())
        return 1;

    const std::string &s1 = obj.getValue("s1");
    const std::string &s2 = obj.getValue("s2");

    if (s1.empty())
        return 1;

    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }

    file << line;
    return 0;
}

int main(int ac, char *av[])
{
    Sed obj;
    if (ac == 4)
    {
        obj.setValues(av[1], av[2], av[3]);
        std::ifstream file(av[1]);
        std::string line;
        if (!file.is_open())
            return 1;
        std::getline(file, line, '\0');
        ft_read_replace(line, obj);
    }
    else
    {
        err_parsing();
        return 1;
    }
    return 0;
}