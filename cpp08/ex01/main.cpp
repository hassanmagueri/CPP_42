/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:41:08 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/05 20:45:04 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    try
    {
    unsigned int n = 3;
    Span s(n);
    std::cout << s.shortestSpan() << std::endl;
    std::cout << s.longestSpan() << std::endl;
    s.addNumber(10);
    s.addNumber(9);
    s.addNumber(1);

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    Span sp;
    sp.addRang(v.begin(), v.end());

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // Span sc = s;
    // std::cout << sc.shortestSpan() << std::endl;
    // std::cout << sc.longestSpan() << std::endl;


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
