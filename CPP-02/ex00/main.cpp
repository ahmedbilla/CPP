/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:43:30 by ahbilla           #+#    #+#             */
/*   Updated: 2025/11/02 22:21:27 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// class f{
//     public :
//         int nbr ;
//         int test;
//         f(){};
//         f( const f& other );

//         void vv() {std::cout << "ahbilla";}
//         int operator+(f &obj){return this->nbr + obj.nbr;}
//         int operator-(f &obj)
//         {
//             return (this->nbr - obj.nbr); 
//         }
// };
// f::f(const f& other)
// {
//     *this= other;
// }
// int main( void ) {
//     f a;
    
//     a.nbr = 5;
//     a.test = a.nbr * 2;
//     f test(a);

//     std::cout << test.test;
//     f b(a);
//     // b.nbr = 2005;
//     // std::cout << a + b << std::endl;
//     // std::cout << a.operator-(b) << std::endl;


// // Fixed a;
// // Fixed b( a );
// // Fixed c;
// // c = b;
// // std::cout << a.getRawBits() << std::endl;
// // std::cout << b.getRawBits() << std::endl;
// // std::cout << c.getRawBits() << std::endl;
// return 0;
// }
// //1+1
int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}

