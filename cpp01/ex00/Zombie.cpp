/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:45:16 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/03 23:17:34 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : name(_name)
{
    this->name = _name;
}

Zombie::~Zombie()
{
    std::cout << name << "It's me" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..."<< std::endl;
}