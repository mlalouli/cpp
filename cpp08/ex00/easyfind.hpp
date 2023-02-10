/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:32 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/03 17:30:31 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <array>

template <typename T>

void easyfind(T &num, int element)
{
    if (std::find(num.begin(), num.end(), element) == num.end())
        std::cout << "Element not find in this array :(" << std::endl;
    else
        std::cout << "This element Fond in array :)" << std::endl;
   
}