/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:24:23 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/27 21:33:38 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* animal = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();
const WrongAnimal* wrongA = new WrongAnimal();
const WrongAnimal* wrongC = new WrongCat();
std::cout << cat->getType() << " " << std::endl;
std::cout << dog->getType() << " " << std::endl;
std::cout << wrongA->getType() << " " << std::endl;
std::cout << wrongC->getType() << " " << std::endl;
 dog->makeSound(); //will output the cat sound!
cat->makeSound();
animal->makeSound();
wrongA->makeSound();
wrongC->makeSound();

return 0;
}