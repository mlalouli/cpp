/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:53:01 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/21 12:44:02 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{ 
    {
        Weapon club = Weapon(" crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType(" some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon(" crude spiked club");
        HumanB jim("Jim ");
        jim.setWeapon(club);
        jim.attack();
        club.setType(" some other type of club");
        jim.attack();
    }
    return 0;
}