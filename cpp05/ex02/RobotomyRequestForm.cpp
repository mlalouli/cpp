/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 01:00:20 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 17:41:45 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default Constructer (RobotomyRequestForm) is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :AForm(getTarget(), 0, 72, 45)
{
    this->Targit = target;
    std::cout << "Constructer ic called (RobotomyRequestForm) "<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):AForm(copy.Targit, 0, 72, 45)
{
    this->Targit = copy.Targit;
    std::cout << "Copy assigment (RobotomyRequestForm) is called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copyassig)
{
    this->Targit = copyassig.Targit;
    return (*this);
}

void RobotomyRequestForm::setTarget(std::string _tar)
{
    this->Targit = _tar;
}

const std::string &RobotomyRequestForm::getTarget() const
{
    return (Targit);
}

void RobotomyRequestForm::execute(Bureaucrat const &execot) const
{
    if (!getSigned())
        throw(FormNotSigned());
    if (getGradeExic()  < execot.getGrade())
        throw(GradeTooLowException());
    srand(time(0));
    if (rand() % 2 == 0)
        std::cout << Targit << "has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << Targit << " the robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructer (RobotomyRequestForm) is called" << std::endl;
}

const char *RobotomyRequestForm::FormNotSigned::what() const throw()
{
    return ("This Form is not signed");
}