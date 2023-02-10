/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:44:57 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/03 23:01:08 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <istream>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        Zombie(std::string _name);
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
