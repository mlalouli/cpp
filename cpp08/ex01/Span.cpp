/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:01:43 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/04 00:13:13 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}
Span::Span(unsigned int _N)
{
    this->N = _N;
}

Span::Span(const Span &copy)
{
    this->N = copy.N;
}

void Span::addNumber(int element)
{
    if (lst.size() == (unsigned long) element)
    {
        throw(ContainerIsFull());
    }
    else
        lst.push_back(element);
}

const char *Span::ContainerIsFull::what() const throw()
{
    return ("Container is Full---->");
}

int Span::shortestSpan()
{
    if (lst.size() == 1 || lst.size() == 0)
        throw(ContainerIsFull());
    else
    {
        std::vector<int> res;
        std::adjacent_difference(lst.begin(), lst.end(), std::back_inserter(res));
        for (int i =0; res[i]; i++)
        {
            if (res[i] < 0)
                res[i] *= (-1);
        }
        int min = *min_element(res.begin(), res.end());
        return (min);
    }
}

Span &Span:: operator=(const Span &assigCopy){
    N = assigCopy.N;
    return (*this);
}

int Span::longestSpan()
{
    if (lst.size() == 1 || lst.size() == 0)
        throw(ContainerIsFull());
    else
    {
        int min = *(std::min_element(lst.begin(), lst.end()));
        int max = *(std::max_element(lst.begin(), lst.end()));
        return (max - min);
    }
}

void Span::addManyNumbers(std::list<int>::iterator itStart,std::list<int>::iterator itEnd)
{
    if (static_cast<int> (N - lst.size()) < (*itEnd - *itStart))
        throw(ContainerIsFull());
    else
        lst.insert(lst.end(), itStart, itEnd);
}

Span::~Span()
{
    
}
