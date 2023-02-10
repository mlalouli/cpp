/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:07:54 by mlalouli          #+#    #+#             */
/*   Updated: 2022/11/30 05:47:10 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook page;
    int idx = 0;
    while(1)
    {
        std::cout << "what u want : ";
        std::getline(std::cin, command);
        if(std::cin.eof())
            exit(0);
        if (command.compare("EXIT") == 0)
        {
            exit(0);
        }
        else if (command.compare("ADD") == 0)
        {
            if (idx != 8)
                idx++;
            page.input_contact();
        }
        else if (command.compare("SEARCH") == 0)
        {
            page.searsh(idx);
            page.select_index(idx);
        }
        else
            std::cout <<"My ARG is :ADD, EXIT, SEARCH:)"<< std::endl;
    }
}