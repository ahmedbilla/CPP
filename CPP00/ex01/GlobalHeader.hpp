/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GlobalHeader.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:12:32 by ahbilla           #+#    #+#             */
/*   Updated: 2025/10/22 15:00:26 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBALHEADER_HPP
# define GLOBALHEADER_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

void print_headr();
std::string check_len(std::string str);
int is_just_space(std::string str);
int check_is_number(std::string str);
int non_printable(std::string str);
int check_printable(std::string &param);

#endif