/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:23:27 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/28 16:57:00 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:

        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &_copyasig);
        std::string getType() const;
        void setType(std::string const _type);
        virtual void makeSound() const;
        virtual ~Animal();
        
};

