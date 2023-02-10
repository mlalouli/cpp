/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:20:10 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 00:21:47 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Form	form("Form",10,10, 10);
		Bureaucrat	objt1("objt1", 11);
		Bureaucrat	objt2("objt2", 11);
		objt1.signForm(objt1, form);
		objt2.signForm(objt2, form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

