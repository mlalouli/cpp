/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:20:10 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/29 22:46:56 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat	objt1("objt1", 150);
		Bureaucrat	objt2("objt2", 50);
        
		std::cout << objt1.getName() <<" before increment grade "<< objt1.getGrade() <<std::endl;
		objt1.increment();
		std::cout << objt1 <<std::endl;
		std::cout << objt2.getName() <<" before decrement grade "<< objt2.getGrade() <<std::endl;
		objt2.decrement();
		std::cout << objt2 <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

