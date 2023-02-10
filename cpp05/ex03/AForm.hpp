/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 00:59:11 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 20:20:39 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Bureaucrat.hpp"
 
class Bureaucrat;

class AForm
{
private:
    const std::string Name;
    bool Signed;
    const int GradSig;
    const int GradeExic;
public:
    AForm();
    AForm(std::string _name, bool _signed, const int _gradsig, const int gradexic);
    AForm(AForm const &copt);
    AForm &operator=(AForm const &copyassig);
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
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual ~AForm();
};
std::ostream  &operator<<(std::ostream &out, const AForm &cop);