/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:23:47 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/27 17:12:48 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Constructor (Cat) is called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    this->type = copy.getType();
    std::cout << "Copy Constructor (Cat) is called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor (Cat) is called" << std::endl;
}

Cat &Cat::operator=(const Cat &_copyasig)
{
    this->type = _copyasig.getType();
    std::cout << "Copy assigment operator (Cat) is called" << std::endl;
    return (*this);
}

void Cat::makeSound() const 
{
    std::cout << type << " maiwwwww" << std::endl;
}