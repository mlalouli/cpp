/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:04:37 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/02 00:19:57 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>

void swap(T &x, T &y)
{
    T a;
    a = x;
    x = y;
    y = a;
}


template <typename T>

T max(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T>

T min(T x, T y)
{
    return (x < y) ? x : y;
}

