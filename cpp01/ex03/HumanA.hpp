/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:53:53 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/12 02:44:38 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef HUMANA_HPP
// #define HUMANA_HPP
#pragma once

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon &w);
    ~HumanA();
    void attack();
    
};

// #endif