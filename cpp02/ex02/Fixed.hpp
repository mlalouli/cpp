/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:11:23 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 17:21:12 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
private:
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
    int operator >(Fixed const &fixed);
    int operator <(Fixed const &fixed);
    int operator <=(Fixed const &fixed);
    int operator >=(Fixed const &fixed);
    int operator !=(Fixed const &fixed);
    int operator==(Fixed const &fixed);
    float operator *(Fixed const &fixed);
    float operator -(Fixed const &fixed);
    float operator /(Fixed const &fixed);
    float operator +(Fixed const &fixed);
    Fixed operator ++();
    Fixed operator --();
    Fixed operator ++(int);
    Fixed operator --(int);
    Fixed &min(Fixed &fixed0, Fixed &fixed1);
    Fixed &max(Fixed &fixed0, Fixed &fixed1);
    static Fixed &min(Fixed const &fixed0, Fixed const &fixed1);
    static Fixed &max(Fixed const &fixed0, Fixed const &fixed1);
};
std::ostream &operator<<(std::ostream &output, Fixed const &fixedP);

