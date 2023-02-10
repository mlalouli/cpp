/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:24:23 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/28 19:19:54 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animal[4];
    
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Cat();
         else
               animal[i] = new Dog();
    }
    for (int i = 0; i < 4; i++){
        std::cout << animal[i]->getType() << std::endl;
    }
    for(int i = 0;i < 4; i++)
    {
        if (animal[i] != animal[i + 1])
            delete animal[i];
    }

    return 0;
}