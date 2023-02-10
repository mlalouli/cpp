/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:37:41 by mlalouli          #+#    #+#             */
/*   Updated: 2022/11/30 20:16:45 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

contact::contact()
{
    this->first_name_ = "";
    this->last_name_ = "";
    this->nick_name_ = "";
    this->phone_number_ = "";
    this->darkest_secret_ = "";
}


contact::~contact()
{
    return ;
}

void contact:: printDataRow(void)
{
    if (!first_name_.empty() && !last_name_.empty() && !nick_name_.empty()) 
    {
    std::cout <<  "         " << this->Index;
    std::cout << "|";
    printColumnContact(contact::first_name_);
    std::cout << "|";
    printColumnContact(contact::last_name_);
    std::cout << "|";
    printColumnContact(contact::nick_name_);
    std::cout << "|"<< std::endl;
    }
    
}

void    contact::printColumnContact(std::string contacts) {
    int i;
    int len;

    i = 0;
    len = contacts.length();
    while (i + len < 10)
    {
        std::cout << " ";
        i++;
    }
    if (len > 10)
        std::cout <<contacts.substr(0,9)<<".";
    else
        std::cout << contacts;
    
}


int contact::inp_cont(int index_)
{
    this->Index = index_ ++;
	std::cout << "first_name: ";
	getline(std::cin, this->first_name_);
    if(std::cin.eof())
        exit(0);
	std::cout << "last_name: ";
	getline(std::cin, this->last_name_);
    if(std::cin.eof())
        exit(0);
	std::cout << "nickname: ";
	getline(std::cin, this->nick_name_);
	std::cout << "phone_number: ";
	getline(std::cin, this->phone_number_);
	std::cout << "darkest_secret: ";
	getline(std::cin, this->darkest_secret_);

	if (first_name_.length() == 0 ||  last_name_.length() == 0 ||
	nick_name_.length() == 0 || phone_number_.length() == 0 || darkest_secret_.length() == 0)
		return (0);
	return (1);
}
void contact::print_page (void) const
{
    if (!first_name_.empty() && !last_name_.empty() && !nick_name_.empty() && !phone_number_.empty() && !darkest_secret_.empty())
    {
    std::cout << "First name : " << first_name_ << std::endl;
    std::cout << "Last name : " << last_name_ << std::endl;
    std::cout << "Nick name : " << nick_name_ << std::endl;
    std::cout << "Phone number : " << phone_number_ << std::endl;
    std::cout << "Darkest secret : " << darkest_secret_ << std::endl;
    }
    else
        std::cout << "this contact not found!"<< std::endl;
}


