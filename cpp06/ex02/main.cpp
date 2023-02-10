/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:37:40 by mlalouli          #+#    #+#             */
/*   Updated: 2023/01/01 22:37:10 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    Base* In[3] = {new A(), new B(), new C()};
    srand(time(0));
    int Rand = rand() % 3;
    for (int i = 0; i < 3; i++)
    {
        if (i != Rand)
            delete In[i];
    }
    return (In[Rand]);
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    if (a)
        std::cout << "Class 'A'" << std::endl;
    B* b = dynamic_cast<B*>(p);
    if (b)
        std::cout << "Class 'B'" << std::endl;
    C* c = dynamic_cast<C*>(p);
    if (c)
        std::cout << "Class 'C'" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "Class 'A' referens" << std::endl;
        return ;
    }
    catch(...)
    {
        try
        {
            B b = dynamic_cast<B&>(p);
        std::cout << "Class 'B' referens" << std::endl;
        return ;
        }
        catch(...)
        {
            try
            {
                C c = dynamic_cast<C&>(p);
                std::cout << "Class 'C' referens" << std::endl;
                return ;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
        
    }
    
}

int main( void ) {
    
  Base *base = generate();

	identify(base);
    identify(*base);
    delete (base);
}