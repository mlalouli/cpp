/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 05:03:38 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/22 19:43:25 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Fixed
{
private:
    int fpn;
    static const int number = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &copy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    void operator =(Fixed const &fpn);
};
