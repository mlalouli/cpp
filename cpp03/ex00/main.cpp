/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:27:45 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 18:48:00 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap claptrap0("claptrap0");
	ClapTrap claptrap1("claptrap1");
    
	claptrap0.attack("claptrap1");
	claptrap1.takeDamage(20);
	claptrap0.beRepaired(100);

    std::cout << "claptrap0 you have now " << claptrap0.getHitPoint() << " points of hit and " << claptrap0.getEnergyPoint() << " points of energy" << std::endl;
	std::cout << std::endl;
	std::cout << "claptrap1 you have now " << claptrap1.getHitPoint() << " points of hit and " << claptrap1.getEnergyPoint() << " points of energy" << std::endl;
	std::cout << std::endl;
	claptrap0.setEnergyPoint(0);
	claptrap0.attack(claptrap1.getName());
	return (0);
}