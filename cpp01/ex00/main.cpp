/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:45:27 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/03 23:01:24 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{    
    Zombie *zombie;
    randomChump("stack Zombie :");
    zombie = newZombie("heap Zombie : ");
    zombie->announce();
    delete(zombie);
    return (0);
}