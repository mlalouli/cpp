/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:47:30 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/04 20:11:53 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

void Zombie::setname(std::string name)
{
    this->name = name;
}

Zombie::Zombie(std::string _name)
{
    this->name = _name;
}

Zombie::~Zombie()
{
    std::cout << name << "call me"<< std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name<< " BraiiiiiiinnnzzzZ..." << std::endl;
}