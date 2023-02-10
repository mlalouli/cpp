/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:27:45 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 17:40:02 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	FragTrap objt1("objt1");
	objt1.attack(objt1.getName());
	objt1.setEnergyPoint(1);
	objt1.beRepaired(10);
	objt1.attack(objt1.getName());
	std::cout << std::endl;
	objt1.highFivesGuys();
	std::cout << std::endl;
	return (0);
}