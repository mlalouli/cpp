/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:56:21 by mlalouli          #+#    #+#             */
/*   Updated: 2022/11/29 21:19:36 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>


class contact
{
    private:
        std::string first_name_;
        std::string last_name_;
        std::string nick_name_;
        std::string phone_number_;
        std::string darkest_secret_;
        int         Index;
    public:
        int indx;
        void printColumnContact(std::string contacts);
        void printDataRow(void);
        int inp_cont(int index_);
        void print_column(std::string _text) const;
        void print_page (void) const;
        void print_pr(int _index);
        contact();
        ~contact();
};

#endif