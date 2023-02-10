/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 05:37:21 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/17 05:52:56 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl
{
private:
    /* data */
public:
    Harl();
    ~Harl();
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void complain( std::string level);
};

