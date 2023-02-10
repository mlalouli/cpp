/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 23:03:32 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 00:28:56 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string Name;
    bool Signed;
    const int GradSig;
    const int GradeExic;
public:
    Form();
    Form(std::string _name, bool _signed, const int _gradsig, const int gradexic);
    Form(Form const &copt);
    Form &operator=(Form const &copyassig);
    class GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw();
    };
    const std::string &getName() const;
    bool getSigned() const;
    int getGradsig() const;
    int getGradeExic() const;
    void beSinged(const Bureaucrat &bueaucrat);
    ~Form();
};

std::ostream  &operator<<(std::ostream &out, const Form &cop);

