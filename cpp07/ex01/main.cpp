/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:23:58 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/02 14:52:29 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
    int array[7] = {0, 1, 2, 3, 4, 5, 6};
    std::string str[4] = {"mlaloui", "student", "at", "1337"};
     std::cout  << "Is intiger : " << std::endl;
     iter(array, 7, &fonction);
     std::cout << std::endl;

     std::cout << "Is strings :  " << std::endl;
     iter(str, 4, &fonction);
    
}