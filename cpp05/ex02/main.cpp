/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 00:56:06 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/30 17:12:46 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {

	try {
                Bureaucrat      brcrt("brcrt", 19);
                PresidentialPardonForm  ppf("ppf");
                RobotomyRequestForm     rrf("rrf");
                ShrubberyCreationForm   scf("scf");

                ppf.beSinged(brcrt);
                rrf.beSinged(brcrt);
                scf.beSinged(brcrt);

                brcrt.executeForm(ppf);
                brcrt.executeForm(rrf);
                brcrt.executeForm(scf);
        }
        catch (std::exception & e) {
                std::cerr << e.what() << std::endl;
        }
        return (0);
}