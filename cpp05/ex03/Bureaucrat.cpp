/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:20:42 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 01:32:40 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Constructer Bureaucrat is called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) :Name(name)
{
    if (grade < 1)
    {
        throw(GradeTooHighException());
    }
    else if (grade > 150)
    {
        throw(GradeTooLowException());
    }
    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) :Name(copy.Name)
{
    *this = copy;
    std::cout << "Copy Constructer Bureaucrat is called" << std::endl;
}

int Bureaucrat::getGrade() const {
    return(grade);
}

const std::string &Bureaucrat::getName() const
{
    return (Name);
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade to low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade to high";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copyassigm)
{
    this->grade = copyassigm.grade;
    return (*this);
}

int Bureaucrat::increment()
{
    this->grade--;
    if (this->grade < 1)
    {
        throw(GradeTooHighException());
    }
    else if (this->grade > 150)
    {
        throw(GradeTooLowException());
    }
    return (0);
}

int Bureaucrat::decrement()
{
    this->grade++;
    if (this->grade < 1)
    {
        throw(GradeTooHighException());
    }
    else if (this->grade > 150)
    {
        throw(GradeTooLowException());
    }
    return (0);
}

std::ostream  &operator<<(std::ostream &out, const Bureaucrat &cop)
{
    out << cop.getName() << ", bureaucrat grade " << cop.getGrade() << std::endl;
    return (out);
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cout << Name << "We can't execute this Forn -----> " << e.what() << std::endl;
    }
    
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructer (Bureaucrat) is called" << std::endl;
}