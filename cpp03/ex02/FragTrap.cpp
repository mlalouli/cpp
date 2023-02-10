/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 01:49:38 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 17:40:43 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
    this->hitpoint = 100;
    this->energypoint = 100;
    this->attackdamag = 30;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
}

FragTrap::~FragTrap()
{
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
    ClapTrap::operator= (copy);
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "high fives" << std::endl;
}