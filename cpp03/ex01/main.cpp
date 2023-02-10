/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:27:45 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 18:49:38 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap objt0("objt0");
	objt0.hitpoint = 0;
	ScavTrap objt1("objet1");
	objt1 = objt0;
	std::cout << objt1.getName() << objt1.hitpoint << "\n"; 
	objt0.attack(objt1.getName());
	objt1.takeDamage(objt0.getAttackDamag());
	objt1.beRepaired(1);
	objt1.attack(objt0.getName());
	objt0.takeDamage(objt1.getAttackDamag());
	return (0);
}