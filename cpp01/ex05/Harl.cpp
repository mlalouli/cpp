/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 05:37:32 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/18 01:59:49 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
    
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl:: complain( std::string level) {
    
    int i;
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    
    void (Harl::*PNF[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    Harl opjt;
    i = 0;
	while (i < 4) {
        if (level == levels[i]){
            (opjt.*PNF[i])();
            break;
        }
        i++;
    }
    if (i == 4)
        std::cout << level << " level not found" << std::endl;
}