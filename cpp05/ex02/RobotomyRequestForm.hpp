/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 01:00:28 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 16:34:02 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"


class RobotomyRequestForm :public AForm
{
private:
    std::string Targit;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &copyAssig);
    ~RobotomyRequestForm();
    const std::string &getTarget() const;
    void setTarget(std::string _tar);
    void execute(Bureaucrat const & execut) const;
    class FormNotSigned : public std::exception {
        virtual const char* what() const throw();
    };
    
};
