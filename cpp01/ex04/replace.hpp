/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:49:49 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/17 04:50:31 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>

class Replace
{
    private:
        std::string s1;
        std::string s2;
        std::string fileName;
    public:
        Replace(std::string _filename, std::string _s1, std::string _s2);
        ~Replace();
        std::string	replaceLine(std::string line);
        void replase();
};

