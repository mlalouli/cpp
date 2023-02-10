/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:24:23 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 20:19:27 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructer (Intern) is called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
    std::cout << "Copy constructer (Intern) is called" << std::endl;
}

Intern &Intern::operator=(const Intern &copyassig)
{
    (void)copyassig;
    return (*this);
}

AForm *Intern::makeForm(const std::string &form, const std::string &target)
{
    int l = -2;
    std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *pnt[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    for(int i = 0; i < 3;i++)
    {
        if (str[i] == form)
        {
            std::cout << "Intern creates " << str[i] << std::endl;
            l = i;
        }
        else
            delete pnt[i];
    }
    if (l == -2)
    {
        throw(FormNotFound());
    }
    return (pnt[l]);
}

const char *Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}

Intern::~Intern()
{
    std::cout << "Destructer (Intern) is called" << std::endl;
}
