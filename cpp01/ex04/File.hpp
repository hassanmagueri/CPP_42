/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:39:43 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/22 11:46:25 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILE_HPP__
# define __FILE_HPP__
# include <string>
# include <iostream>
# include <fstream>
# include <stdexcept>

class File
{
    private:
        std::string name;

        std::string strReplace(std::string str, std::string search, std::string replace);
    public:
        File(std::string name);
        std::string readFileAndReplace(std::string search, std::string replace);
};

#endif