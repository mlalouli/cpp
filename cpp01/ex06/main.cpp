/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:00:46 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/18 02:33:09 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl harl;
    if (ac != 2)
    {
        std::cout << "check ur arg!" << std::endl;
        return(1);
    }
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 5)
    {
        if (level[i] == av[1])
            break;
        i++;
    }
    switch (i)
    {
    case 0:
    {
        std::cout << "[ DEBUG ]" << std::endl;
        harl.debug();
        i++;
    }
    case 1:
    {
        std::cout << "[ INFO ]" << std::endl;
        harl.info();
        i++;
    }
    case 2:
    {
        std::cout << "[ WARNING ]" << std::endl;
        harl.warning();
        i++;
    }
    case 3:
    {
        std::cout << "[ ERROR ]" << std::endl;
        harl.error();
        break;
    }
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return(0);
}