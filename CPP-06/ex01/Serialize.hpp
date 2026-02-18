/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:42:17 by ahbilla           #+#    #+#             */
/*   Updated: 2026/02/15 17:01:16 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class  Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(Serializer const &other);
        Serializer &operator=(Serializer const &other);
    public:
       static uintptr_t serialize(Data* ptr);
       static Data* deserialize(uintptr_t raw);
};


#endif