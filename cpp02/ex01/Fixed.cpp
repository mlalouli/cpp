/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:30:19 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/24 16:02:54 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &value)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = value;
}

void Fixed::operator=(Fixed const &fpn)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = fpn.getRawBits();
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::Fixed(const int copy)
{
    this->value = copy << 8;
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float copy)
{
    this->value = roundf(copy * 256);
    std::cout << "Float constructor called" << std::endl;
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
