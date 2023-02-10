/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:51:07 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 01:35:53 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->hitpoint = 100;
    this->attackdamag = 20;
    this->energypoint = 50;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap::ScavTrap(ScavTrap const &copy) :ClapTrap(copy)
{}

void ScavTrap::attack(const std::string& attc)
{
    if (getHitPoint() == 0 || getAttackDamag() == 0)
        std::cout << getName() << " lest go !!" << std::endl;
    else
    {
        std::cout << getName() << " ScavTrap " << attc << std::endl;
        setEnergyPoint(getEnergyPoint() - 1);
    }
}

void ScavTrap::guardGate()
{
    std::cout << getName();
}