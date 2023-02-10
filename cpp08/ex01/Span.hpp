/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:01:33 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/03 22:25:46 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <vector>
#include <numeric>
#include <iterator>
#include <bits/stdc++.h>

class Span
{
    private:
        unsigned int N;
        std::list<int> lst;
    public:
        Span();
        Span(unsigned int _N);
        Span(const Span &copy);
        void addNumber(int elmnt);
        Span &operator=(const Span &copyassig);
        class ContainerIsFull : public std::exception {
    			virtual const char* what() const throw();
    	};
        int shortestSpan();
        int longestSpan();
        void addManyNumbers(std::list<int>::iterator itStart,std::list<int>::iterator itEnd);
        ~Span();
};
