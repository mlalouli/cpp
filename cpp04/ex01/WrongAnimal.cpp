/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:20:29 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/27 17:13:43 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->Type = "Wrong Animal";
    std::cout << "Constructer (WrongAnimal) is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &_copy)
{
    this->Type = _copy.getType();
    std::cout << "Copy Consructer (WrongAnimal) is called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &_copyasig)
{
    this->Type = _copyasig.getType();
    std::cout << "Copy assigment (WrongAnimal) is called" << std::endl;
    return (*this);
}

void WrongAnimal::setType(std::string _type)
{
    this->Type = _type;
}

std::string WrongAnimal::getType() const
{
    return (Type);
}

void WrongAnimal::makeSound() const
{
    std::cout << Type << " Make Sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor (WrongAnimal) is called" << std::endl;
}
