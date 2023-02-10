/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:51:29 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/21 13:14:06 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main (int ac, char **av)
{
    if (ac <= 3 || ac > 4)
    {
        std::cout << "We need four arg , check it:)" << std::endl;
        return (0);
    }
    Replace replase(av[1], av[2], av[3]);
    replase.replase();
}