/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:53:18 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/11 23:38:01 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
private:
    std::string type;
public:
    void setType(std::string _type);
    const std::string &getType();
    Weapon(std::string type_);
    ~Weapon();
};

#endif