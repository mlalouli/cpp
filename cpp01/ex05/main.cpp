/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 05:37:07 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/18 00:50:22 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    Harl harl;
    std::cout << "DEBUG level:" << std::endl;
    harl.debug();
    std::cout << "INFO level:" << std::endl;
    harl.info();
    std::cout << "WARNING level:" << std::endl;
    harl.warning();
    std::cout << "ERROR level:" << std::endl;
    harl.error();
    std::cout << "complain :" << std::endl;
    harl.complain("INFO");
}