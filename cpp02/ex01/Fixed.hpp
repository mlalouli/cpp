/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:30:10 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/24 16:02:51 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <string.h>

class Fixed
{
private:
    /* data */
    int value;
    static const int bits = 8;
    
public:
    Fixed();
    Fixed(Fixed const &value);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
    void operator=(Fixed const &fpn);
    Fixed(const int copy);
    Fixed(const float copy);
    int getRawBits() const;
    void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream &output, Fixed const &fixedP);
