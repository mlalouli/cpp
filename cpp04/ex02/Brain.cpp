/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:17:07 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/28 16:37:41 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructer (Brain) is called" << std::endl; 
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Copy Constructer (Brain) is called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copyassig)
{
    for (int i = 0; i < 100 ;i++)
        this->ideas[i] = copyassig.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor (Brain) is called" << std::endl;
}