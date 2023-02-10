/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:24:15 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/02 16:18:18 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

template <typename T>

void iter(T *array, size_t lengthArray, void (*fnct) (T element))
{
    for (size_t i = 0; i < lengthArray; i++)
    {
        fnct(array[i]);
    }
}

template <typename T>

void fonction(T element)
{
    std::cout << "element : " << element << std::endl;
}