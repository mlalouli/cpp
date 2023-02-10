/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 01:00:05 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 17:40:45 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm :public AForm
{
private:
    std::string Targit;
public:
     ShrubberyCreationForm();
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copyAssig);
    ~ShrubberyCreationForm();
    const std::string &getTarget() const;
    void setTarget(std::string _target);
    void execute(Bureaucrat const & executor) const;
    class FormNotSigned : public std::exception {
        virtual const char* what() const throw();
    };
    class FileError : public std::exception {
			virtual const char* what() const throw();
		};
};
