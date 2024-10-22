/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:54:40 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/21 18:58:54 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "AForm.hpp"
#include <fstream>
#include <ctime>


#undef signGrade
#undef executeGrade
#define signGrade 72
#define executeGrade 45

class Bureaucrat;


class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm & operator=(const RobotomyRequestForm &);
    ~RobotomyRequestForm();

    RobotomyRequestForm(std::string _target);
    void execute(Bureaucrat const &executor) const;
};

#endif