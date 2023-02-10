/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:24:54 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/02 00:01:09 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

typedef struct Data{
    std::string _dat;
}Data;

uintptr_t serialize(Data* ptr)
{
    uintptr_t convert = reinterpret_cast<uintptr_t>(ptr);
    return (convert);
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}

int main()
{
    Data *dt = new Data();
    Data *t;
    dt->_dat = "mlalouli";
    uintptr_t s = serialize(dt);

    t = deserialize(s);
    std::cout << dt->_dat << std::endl;
    std::cout << t->_dat << std::endl;
}