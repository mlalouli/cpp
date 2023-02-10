/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:27:58 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 01:23:06 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        int energypoint;
        int attackdamag;
    
    public:
        int hitpoint;
        ClapTrap(std::string _name);
        ClapTrap(ClapTrap const &copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        void setName(int name);
        int getHitPoint();
        void setHitPoint(int Hitpoint);
        int getEnergyPoint();
        void setEnergyPoint(int energypoint);
        int getAttackDamag();
        void setAttackDamag(int _attackdamag);
        ClapTrap &operator=(ClapTrap const &copy);
        ~ClapTrap();
};

