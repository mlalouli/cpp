/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:53:32 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/05 02:11:33 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_)
{
    this->type = type_;
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}

const std::string &Weapon:: getType()
{
    return (type);
}