/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:49:40 by mlalouli          #+#    #+#             */
/*   Updated: 2022/12/21 13:41:51 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(std::string _filename, std::string _s1, std::string _s2)
{
    this->fileName = _filename;
    this->s1 = _s1;
    this->s2 = _s2;
}

Replace::~Replace()
{   
}

std::string	Replace::replaceLine(std::string fina) {
	
    int 		i;
	std::string	line;
	
    if (s1 == "")
    {
        return (fina);
    }
	i = 0;
    while ((i = fina.find(s1)) >= 0) {
		line = fina.substr(0, i);
		line += s2;
		i += s1.length();
		line += fina.substr(i);
		fina = line;
    }
    return (fina);
}

void Replace::replase()
{
    std::string filenam;
    std::ifstream inFile(fileName);
    std::ofstream outfile;
    
    if (!inFile.is_open())
        std::cout << "u have a problem in open the file " << fileName << std::endl;
    else
    {
        outfile.open(fileName+".replace", std::ios::out);
        if (outfile.is_open())
        {
            while(getline(inFile, filenam))
            {
                outfile << replaceLine(filenam) << "\n";

            }
            inFile.close();
            outfile.close();
        }
        else
        {
            std::cout << "this file don't create" << fileName << std::endl;
            exit (0);
        }

    }
}
