/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:23:17 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/27 17:13:14 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Constructor (Animal) is called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    this->type = copy.getType();
    std::cout << "copy Constructor (Animal) is called" << std::endl;
    
}

Animal &Animal::operator=(const Animal &_copyasig)
{
    this->type = _copyasig.getType();
    std::cout << "Copy assigment operator (Animal) is called" << std::endl;
    return (*this);
}
std::string Animal::getType() const
{
    return (type);
} 

void Animal::setType(std::string const _type) 
{
    this->type = _type;
}

void Animal::makeSound() const
{
    std::cout << type << " Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor (Animal) is called" << std::endl;
}