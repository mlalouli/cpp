/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:31:04 by mlalouli          #+#    #+#             */
/*   Updated: 2022/11/16 15:31:04 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 1;i < ac; i++)
		{
			std::string s = av[i];
			std::transform(s.begin(), s.end(), s.begin(), ::toupper);
			std::cout << s; 
		}
	}
	std::cout << std::endl;
	return (0);
}