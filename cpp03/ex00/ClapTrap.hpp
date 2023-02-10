/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:27:58 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/25 16:15:12 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string name;
        int hitpoint;
        int energypoint;
        int attackdamag;
    
    public:
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

