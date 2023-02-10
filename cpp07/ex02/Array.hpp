/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:19:49 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/02 19:47:28 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

class Array
{
private:
   T *array;
   int narray;
public:
    Array()
    {
        this->array= NULL;
        this->narray = 0;
    }
    Array(int n)
    {
        narray = n;
        array = new T[narray];
        if (!array)
            exit (1);
    }
    Array(const Array &copy)
    {
        *this = copy;
    }
    Array &operator=(const Array &copyassig)
    {
        narray = copyassig.narray;
        array = new T[narray];
        if (!array)
            exit (1);
        for (int i = 0; i < narray;i++)
        {
            array[i] = copyassig.array[i];
        }
        return (*this);
    }
    T &operator[](int i)
    {
        if (i < 0 || i >= narray)
        {
            throw (std::exception());
        }
        return (array[i]);
    }
    T size(void)
    {
        T i = 0;
        while (this->array[i])
            i++;
        return (i);
    }
    ~Array()
    {
        delete [] array;
    }
};
