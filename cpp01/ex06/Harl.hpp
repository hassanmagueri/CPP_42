/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:40:07 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/22 13:28:58 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl
{
typedef void (Harl::*ptrMebFun)(void);

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void func(void);

public:
    void complain(std::string);
};

#endif