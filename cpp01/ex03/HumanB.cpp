/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:55:10 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/21 12:46:04 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string _name)
{
    this->name = _name;
    this->weaponB = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    std::cout << name << "It's HumanB" << weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weaponB)
{
    weaponB = &_weaponB;
}

