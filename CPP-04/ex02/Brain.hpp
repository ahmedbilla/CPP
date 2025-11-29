/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:00:15 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/29 20:51:44 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        void setideas(int indx, std::string value)
        {
            if (indx >= 0 && indx <100)
            {
                ideas[indx] = value;
            }        
        }
        void geter(int i)
        {
            std::cout << ideas[i] << std::endl;
        }
        ~Brain();
};
#endif