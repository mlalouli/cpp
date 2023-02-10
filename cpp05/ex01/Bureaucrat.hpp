/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:20:28 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/29 22:02:53 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form ;

class Bureaucrat
{
private:
    std::string Name;
    int         grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(Bureaucrat const &copy);
    Bureaucrat(const std::string name, int grad);
    const std::string &getName() const;
    int getGrade() const;
    class GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw();
    };
    Bureaucrat &operator=(Bureaucrat const &copyassig);
    void signForm(Bureaucrat const &brcrat, Form &form);
    int increment();
    int  decrement();
    ~Bureaucrat();
};
std::ostream  &operator<<(std::ostream &out, const Bureaucrat &cop);
