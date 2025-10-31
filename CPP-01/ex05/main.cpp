/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:35:17 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/31 15:07:47 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;
    obj.complain("DEBUG");
    obj.complain("INFO");
    obj.complain("WARNING");
    obj.complain("ERROR");
    obj.complain("RANDOM");
}