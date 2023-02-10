/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:20:00 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/27 17:14:49 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->Type = "Wrong Cat";
    std::cout << "Constructer (WrongCta) is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    this->Type = copy.getType();
    std::cout << "Copy Constructer (WrongCat) is called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copyassig)
{
    this->Type = copyassig.getType();
    std::cout << "Copy assigment operator (WrongCat) is called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << Type << " Make sound" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor (WrongCat) is called" << std::endl;
}