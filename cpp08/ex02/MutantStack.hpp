/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 00:20:08 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/04 01:13:36 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stack>


template<typename T>

class MutantStack :public std::stack<T>
{
    public:
        MutantStack()
        {
        };
        MutantStack(const MutantStack &copy)
        {
            *this = copy;
        };
        MutantStack &operator=(const MutantStack &assignCopy)
		{
			std::stack<T>::operator=(assignCopy);
			return (*this);
		};
        ~MutantStack()
        {
        };
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        };
        iterator end()
        {
            return (this->c.end());
        };
};

