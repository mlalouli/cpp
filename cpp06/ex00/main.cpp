/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:50:35 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/01 19:04:21 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convart.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            int Tochar = std::stoi(av[1]);
            if (Tochar != 0)
            {
                std::cout << "char : '" << static_cast<char>(Tochar) << "'" << std::endl;
            }
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "char: impossible" << std::endl;;
        }
        try
        {
            int Toint = std::stoi(av[1]);
                std::cout << "int : " << Toint << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "int: impossible" << std::endl;;
        }

        try
        {
            std::cout << std::fixed << std::setprecision(1);
            float Tofloat = std::stof(av[1]);
                std::cout << "float : " << Tofloat << "f"<<std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "float: nanf" << std::endl;;
        }

        try
        {
            double Todouble = std::stod(av[1]);
                std::cout << "double : " << Todouble << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "double: nan" << std::endl;;
        }
    }
    else
        std::cout << "Giv a argiment -----> int , char , float, double. "<< std::endl;
}