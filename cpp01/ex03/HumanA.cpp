/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:54:38 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/13 20:18:35 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w): weapon(w)
{
    this->name = name;
}
HumanA::~HumanA()
{
}
void HumanA::attack()
{
    std::cout << name << " it's HumanA" << weapon.getType() << std::endl;
}