/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:20:42 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 00:36:57 by mlalouli         ###   ########.fr       */
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

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructer (Bureaucrat) is called" << std::endl;
}

void Bureaucrat::signForm(Bureaucrat const &brcrat, Form &form)
{
    try{
        form.beSinged(*this);
    }
    catch (std::exception &a)
    {
        std::cout << brcrat << " couldn’t sign " << form << " because " << a.what() << std::endl;
        return ;
    }
    std::cout << brcrat << " Signed " << form << std::endl;
}