/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 00:59:58 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 17:47:32 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default Constructer (ShrubberyCreationForm) is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :AForm(getTarget(), 0, 145, 137)
{
    this->Targit = target;
    std::cout << "Constructer ic called (ShrubberyCreationForm) "<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm(copy.Targit, 0, 145, 137)
{
    this->Targit = copy.Targit;
    std::cout << "Copy assigment (ShrubberyCreationForm) is called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copyassig)
{
    this->Targit = copyassig.getTarget();
    return (*this);
}

void ShrubberyCreationForm::setTarget(std::string _tar)
{
    this->Targit = _tar;
}

const std::string &ShrubberyCreationForm::getTarget() const
{
    return (Targit);
}

void ShrubberyCreationForm::execute(Bureaucrat const &execot) const
{
    std::ofstream out;
    if (!getSigned())
        throw(FormNotSigned());
    if (getGradeExic()  < execot.getGrade())
        throw(GradeTooLowException());
    srand(time(0));
    if (rand() % 2 == 0)
        std::cout << Targit << "has been robotomized successfully 50% of the time" << std::endl;
    out.open(getTarget() +"_shrubbery");
    if (!out.is_open() || !out.good())
        throw(FileError());
    out << "               ,@@@@@@@," << std::endl;
    out << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    out << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\"8/8o" << std::endl;
    out << "   ,%&\\&&%&&%,@@@\"@@/@@@88\"8888/88'" << std::endl;
    out << "   %&&%&%&/%&&%@@\\@/ /@@@88888\\8888'" << std::endl;
    out << "   %&&%/ %&%%&&@@\\ V /@@' `88\\ `/88'" << std::endl;
    out << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    out << "       |o|        | |         | |" << std::endl;
    out << "       |.|        | |         | |" << std::endl;
    out << "    \\/ ._\\/_/__/  ,\\//__\\/.  \\//__/_" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructer (ShrubberyCreationForm) is called" << std::endl;
}

const char *ShrubberyCreationForm::FormNotSigned::what() const throw()
{
    return ("This Form is not signed");
}

const char* ShrubberyCreationForm::FileError::what() const throw()
{
    return ("This File can't open --->>>");
}
 