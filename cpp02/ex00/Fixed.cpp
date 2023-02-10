/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 05:03:49 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/21 14:28:36 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called"<< std::endl;
    fpn = 0;
}
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called " << std::endl;
    *this = copy;
}

void Fixed::operator=(Fixed const &fpn)
{
    std::cout << "Copy assignment operator called // <-- This line may be missing depending on your implementation" << std::endl;
    this->fpn = fpn.getRawBits();
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fpn);
}

void Fixed::setRawBits(int const raw)
{
    this->fpn = raw;
}
