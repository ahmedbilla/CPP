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
    size_t res = 0;
    std::string NewFile = (obj.getValue("filename") += ".replace");
    std::ofstream file(NewFile.c_str());

    res = line.find(obj.getValue("s1"), res);
    std::cout <<res << "\n";
    
    file << line;
    std::string a= line;
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

        if(file.is_open())
        {
            std::getline(file, line, '\0');
            // check getline is filed
            ft_read_replace(line,obj);
            // std:: string test= obj.getValue("filename");
            // std::cout << test;
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



