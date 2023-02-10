/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:00:38 by mlalouli          #+#    #+#             */
/*   Updated: 2022/11/30 05:50:31 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
int idx = 0;

PhoneBook::PhoneBook()
{
    PhoneBook::_idx = 0;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void PhoneBook::searsh(int number)
{
    int i;
    
    i = 0;
    for(int i = 0 ; i < 44;i++)
        std::cout << "-";
    std::cout << std::endl;
    std::cout<< "  Index   | FirstName| LastNmae | NickName |" << std::endl;
     for(int i = 0 ; i < 44;i++)
        std::cout << "-";
    std::cout << std::endl;
    
    while (i < number)
    {
        this->page[i].printDataRow();
        i++;
    }
    for(int i = 0 ; i < 44;i++)
        std::cout << "-";
    std::cout << std::endl;
}

int PhoneBook::input_contact (void)
{
    int nmbr;
    
    if (this->_idx < 8){
        nmbr = this->page[this->_idx].inp_cont(this->_idx);
        if (nmbr == 0){
            std::cout << "contact can’t have empty fields" << std::endl;
            return (1);
        }
        this->_idx++;
    }
    else {
        this->page[0].inp_cont(0);
        this->_idx = 1;
    }
    return 0;
}

void PhoneBook::select_index(int number)
{
    std:: string str;
    int num;
    std::stringstream ss;
    
    std::cout << "Select index : ";
    getline(std::cin, str);
    ss << str;
    if (str.length() != 0)
    {
        int i = 0;
        while (str[i])
        {
            if (std::isdigit(str[i]) == 0)
            {
                std::cout <<"we want a nember!" << std::endl;
                return ;
            }
            i++;
        }
        ss  >> num;
        if (num <= number)
            this->page[num].print_page();
        else
            std::cout << "this contact not found!" <<std::endl;
    }
}

