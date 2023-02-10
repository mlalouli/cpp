/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 01:19:01 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 01:20:44 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : Name("default"), Signed(false), GradSig(150), GradeExic(150)
{
    std::cout << "Dfealt constructer is called (AForm)" << std::endl;
}

AForm::AForm(std::string _name, bool _signed, const int _gradsig, const int gradexic) :Name(_name), Signed(_signed), GradSig(_gradsig), GradeExic(gradexic)
{
    std::cout << "Dfealt constructer is called (AForm)" << std::endl;
    if (this->GradSig < 1 || getGradeExic() < 1)
    {
        throw(GradeTooHighException());
    }
    if (this->GradSig > 150 || getGradeExic() > 150)
    {
        throw(GradeTooLowException());
    }
}


AForm::AForm(AForm const &copy)
: Name(copy.Name), Signed(copy.Signed), GradSig(copy.GradSig), GradeExic(copy.GradeExic)
{
    std::cout << "Copy Constructer ic called (AForm)" << std::endl;
}

AForm &AForm::operator=(AForm const &copyassig)
{
    this->Signed = copyassig.Signed;
    return (*this);
}

const char * AForm::GradeTooLowException::what() const throw() {
	return "Grade to AForm low";
}

const char * AForm::GradeTooHighException::what() const throw() {
	return "Grade to AForm high";
}

const std::string &AForm::getName() const{
    return (Name);
}

bool AForm::getSigned() const
{
    return (Signed);
}

int AForm::getGradsig() const
{
    return (GradSig);
}

int AForm::getGradeExic() const
{
    return (GradeExic);
}

std::ostream  &operator<<(std::ostream &out, const AForm &cop)
{
    out << cop.getName() << "Grade sign : " << cop.getSigned() <<  " grade required to sign it : " << cop.getGradsig()
    << " grade required to execute it : " << cop.getGradeExic();
    return (out);
}

void AForm::beSinged(const Bureaucrat &bueaucrat)
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

AForm::~AForm()
{
    std::cout << "Destructer (AForm) is called" << std::endl;
}