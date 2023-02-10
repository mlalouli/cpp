/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:07:25 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/04 20:17:38 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z;
    z = new Zombie[N];
    std::stringstream s;
    for(int i = 0; i < N; i++)
    {
        s << i;
        z[i].setname(name + s.str());
        s.str("");
    }
    return (z);
}