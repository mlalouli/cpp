/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:23:36 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/28 18:51:33 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Constructer (Dog) is called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->type = copy.getType();
    std::cout << "Copy Constructer (Dog) is called" << std::endl;
}

Dog &Dog::operator=(const Dog &_copyasig)
{
    this->type = _copyasig.getType();
    std::cout << "Copy Assigment operator (Dog) is called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructer (Dog) is called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << " Hoooooooow hooow" << std::endl;
}