/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:20:41 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/27 16:47:41 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string Type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    void setType(std::string _type);
    std::string getType() const;
    WrongAnimal &operator=(const WrongAnimal &_copyasig);
    virtual void makeSound() const;
    ~WrongAnimal();
};
