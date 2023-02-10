/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 01:00:41 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 17:44:16 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout<< "Default Constructer (PresidentialPardonForm) is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(getTarget(), 0, 25, 5)
{
    std::cout << "Constructer (PresidentialPardonForm) is called" << std::endl;
    this->Target = target;

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy.Target, 0, 25, 5)
{
    this->Target = copy.getTarget();
    std::cout << "Copy Constructer ic called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copyAssig)
{
    this->Target = copyAssig.getTarget();
    std::cout << "Copy assigment (PresidentialPardonForm) is called" << std::endl;
    return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const
{
    return (Target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (getSigned() == false)
    {
        throw(FormNotSigned());
    }
    if (getGradeExic() > executor.getGrade())
    {
        throw(GradeTooLowException());
    }
    std::cout << this->Target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

const char *PresidentialPardonForm::FormNotSigned::what() const throw()
{
    return ("This Form is not signed>>>");
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructer (PresidentialPardonForm) is called" << std::endl;
}
