/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:49:58 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/05 15:49:59 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
template<typename t, typename fun> void iter( t* addr, size_t len, fun f)
{
    if (addr == NULL || f == NULL)
        return;
    for (size_t i = 0; i < len; i++)
        f(addr[i]);
}