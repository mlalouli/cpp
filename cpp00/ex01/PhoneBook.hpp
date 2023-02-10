/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:01:30 by mlalouli          #+#    #+#             */
/*   Updated: 2022/11/29 23:09:32 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        contact page[8];
        int _idx;
    public:
        PhoneBook();
        ~PhoneBook();
        void print_privew(int _index);
        int input_contact (void);
        void searsh(int number);
       void select_index(int number);
};


#endif
