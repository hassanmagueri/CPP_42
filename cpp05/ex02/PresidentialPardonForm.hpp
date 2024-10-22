/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:54:40 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/21 18:58:54 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include <fstream>
#include <ctime>


#undef signGrade
#undef executeGrade
#define signGrade 72
#define executeGrade 45

class Bureaucrat;


class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm & operator=(const PresidentialPardonForm &);
    ~PresidentialPardonForm();

    PresidentialPardonForm(std::string _target);
    void execute(Bureaucrat const &executor) const;
};

#endif