/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 23:03:24 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 00:36:26 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("default"), Signed(false), GradSig(150), GradeExic(150)
{
    std::cout << "Dfealt constructer is called (Form)" << std::endl;
}

Form::Form(std::string _name, bool _signed, const int _gradsig, const int gradexic) :Name(_name), Signed(_signed), GradSig(_gradsig), GradeExic(gradexic)
{
    std::cout << "Dfealt constructer is called (Form)" << std::endl;
    if (this->GradSig < 1 || getGradeExic() < 1)
    {
        throw(GradeTooHighException());
    }
    if (this->GradSig > 150 || getGradeExic() > 150)
    {
        throw(GradeTooLowException());
    }
}


Form::Form(Form const &copy)
: Name(copy.Name), Signed(copy.Signed), GradSig(copy.GradSig), GradeExic(copy.GradeExic)
{
    std::cout << "Copy Constructer ic called (Form)" << std::endl;
}

Form &Form::operator=(Form const &copyassig)
{
    this->Signed = copyassig.Signed;
    return (*this);
}

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade to Form low";
}

const char * Form::GradeTooHighException::what() const throw() {
	return "Grade to Form high";
}

const std::string &Form::getName() const{
    return (Name);
}

bool Form::getSigned() const
{
    return (Signed);
}

int Form::getGradsig() const
{
    return (GradSig);
}

int Form::getGradeExic() const
{
    return (GradeExic);
}

std::ostream  &operator<<(std::ostream &out, const Form &cop)
{
    out << cop.getName() << "Grade sign : " << cop.getSigned() <<  " grade required to sign it : " << cop.getGradsig()
    << " grade required to execute it : " << cop.getGradeExic();
    return (out);
}

void Form::beSinged(const Bureaucrat &bueaucrat)
{
    if (bueaucrat.getGrade() <= getGradsig())
    {
        this->Signed = true;
    }
    else
    {
        throw(GradeTooLowException());
    }
}

Form::~Form()
{
    std::cout << "Destructer (Form) is called" << std::endl;
}
