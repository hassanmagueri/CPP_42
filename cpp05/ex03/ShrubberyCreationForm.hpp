/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:54:40 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/21 21:55:05 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

#undef signGrade
#undef executeGrade
#define signGrade 145
#define executeGrade 137

class Bureaucrat;


class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(std::string _target);
    void execute(Bureaucrat const &executor) const;
};

#endif