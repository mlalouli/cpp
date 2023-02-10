/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 01:00:48 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 15:46:40 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm :public AForm
{
private:
    std::string Target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copyAssig);
    ~PresidentialPardonForm();
    const std::string &getTarget() const;
    void execute(Bureaucrat const & executor) const;
    class FormNotSigned : public std::exception {
        virtual const char* what() const throw();
    };
    
};


