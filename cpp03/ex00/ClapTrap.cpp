/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:28:15 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 18:49:05 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->attackdamag = 0;
    this->energypoint = 10;
    this->hitpoint = 10;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    *this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
    this->name = copy.name;
    this->hitpoint = copy.hitpoint;
    this->energypoint = copy.energypoint;
    this->attackdamag = copy.attackdamag;
    return (*this);
}

void ClapTrap::setName(int name)
{
    this->name = name;
}

std::string ClapTrap::getName()
{
    return (name);
}

int ClapTrap::getAttackDamag()
{
    return (attackdamag);
}

void ClapTrap::setAttackDamag(int _attackdamage)
{
    this->attackdamag = _attackdamage;
}

int ClapTrap::getEnergyPoint()
{
    return (energypoint);
}

void ClapTrap::setEnergyPoint(int energypoint)
{
    this->energypoint = energypoint;
}

int ClapTrap::getHitPoint()
{
    return(hitpoint);
}

void ClapTrap::setHitPoint(int Hitpoint)
{
    this->hitpoint =  Hitpoint;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
    if (hitpoint <= 0 || energypoint <= 0)
    {
        std::cout << name << " You'r points or you'r energy terminate" << std::endl << std::endl;
        return ;
    }
    else
        {std:: cout << "ClapTrap  " <<name <<"  attacks  " <<target<< "  causing  " <<attackdamag << " points of damage! "<< std::endl << std::endl;
        energypoint--;}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " amount" << amount << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energypoint > 0)
    {
        hitpoint += amount;
        energypoint--;
        std:: cout <<"ClapTrap  " <<name << "  ClapTrap repaired amount " << amount <<" hit points " <<std::endl;
       	std::cout << std::endl;
    }
    else
        std::cout <<name <<"  You'r points or you'r energy terminate !!" <<std::endl;
}
