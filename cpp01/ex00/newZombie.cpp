/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:46:17 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/03 23:02:54 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *new_zombie = new Zombie(name);
    if (!new_zombie)
    {
        std::cout << "U have a problem in alocation :("<< std::endl ;
        exit (0);
    }
    return (new_zombie);
}