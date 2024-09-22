/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:39:45 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/22 12:40:15 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cerr << "enter a valid\n";
        return 1;
    }
    std::string fileName = av[1];
    std::string search = av[2];
    std::string replace = av[3];
    File file(fileName);
    try
    {
        file.readFileAndReplace(search, replace);
    }catch (const std::runtime_error& e)
    {
        std::cerr <<  "Caught an exception: " << e.what() << std::endl;
    }
    return 0;
}
