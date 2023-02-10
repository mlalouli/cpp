/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:06:59 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/04 20:15:34 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>
#include <sstream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        void setname(std::string name);
        Zombie();
        Zombie(std::string _name);
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );

#endif