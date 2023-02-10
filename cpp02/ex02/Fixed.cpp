/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:11:32 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/26 17:21:42 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    this->value = 0;
}

Fixed::~Fixed(){
}

Fixed::Fixed(Fixed const &value)
{
    *this = value;
}

void Fixed::operator=(Fixed const &fpn)
{
    this->value = fpn.getRawBits();
}

int Fixed::getRawBits() const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::Fixed(const int copy)
{
    this->value = copy << 8;
}
Fixed::Fixed(const float copy)
{
    this->value = roundf(copy * 256);
}

int Fixed::toInt() const
{
    return ((int)value / 256);
}

float Fixed::toFloat() const
{
    return ((float)value / 256);
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixedP) { /* ostream operator overloading */

	output << fixedP.toFloat();
	return (output);
}

float Fixed::operator*(Fixed const &fixed)
{
    return ((this->toFloat() * fixed.toFloat()));
}
float Fixed::operator-(Fixed const &fixed)
{
    return ((this->toFloat() - fixed.toFloat()));
}

float Fixed::operator/(Fixed const &fixed)
{
    return ((this->toFloat() / fixed.toFloat()));
}

float Fixed::operator+(Fixed const &fixed)
{
    return ((this->toFloat() + fixed.toFloat()));
}

//comparison operator


int Fixed::operator >(Fixed const &fixed)
{
    if ((this->value > fixed.value))
        return (1);
    else
        return (0);
}

int Fixed::operator <(Fixed const &fixed)
{
    if ((this->value < fixed.value))
        return (1);
    else
        return (0);
}

int Fixed::operator <=(Fixed const &fixed)
{
    if ((this->value <= fixed.value))
        return (1);
        else
            return (0);
}

int Fixed::operator >=(Fixed const &fixed)
{
    if ((this->value >= fixed.value))
        return (1);
    else
        return (0);
}

int Fixed::operator !=(Fixed const &fixed)
{
    if ((this->value != fixed.value))
        return (1);
    else
        return (0);
}

int Fixed::operator==(Fixed const &fixed)
{
    if (this->value == fixed.value)
        return (1);
    else
        return (0);
}

//decrement / decrators operator

Fixed Fixed::operator ++()
{
    Fixed object;
    object.value = ++value;
    return (object);
}

Fixed Fixed::operator ++(int)
{
    Fixed object;
    object.value = value++;
    return (object);
}

Fixed Fixed::operator --()
{
    Fixed object;
    object.value = --value;
    return (object);
}

Fixed Fixed::operator --(int)
{
    Fixed object;
    object.value = value--;
    return (object);
}

// min and max

Fixed &Fixed::min(Fixed &fixed0, Fixed &fixed1)
{
    if ((Fixed) fixed0.value > (Fixed) fixed1.value)
        return ((Fixed &) fixed1);
    else
        return ((Fixed &) fixed0);    
}

Fixed &Fixed::max(Fixed &fixed0, Fixed &fixed1)
{
    if (fixed0.value < fixed1.value)
        return (fixed1);
    else
        return (fixed0);
}

Fixed &Fixed::min(Fixed const &fixed0, Fixed const &fixed1)
{
    if ((Fixed) fixed0.value > (Fixed) fixed1.value)
        return ((Fixed &) fixed1);
    else
        return ((Fixed &) fixed0);    
}

Fixed &Fixed::max(Fixed const &fixed0, Fixed const &fixed1)
{
    if ((Fixed) fixed0.value < (Fixed) fixed1.value)
        return ((Fixed &) fixed1);
    else
        return ((Fixed &) fixed0);
}
