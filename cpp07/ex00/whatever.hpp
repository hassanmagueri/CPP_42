/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:50:02 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/05 15:50:03 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename t> void swap(t &a, t &b)
{
    t c = a;
    a = b;
    b = c;
}

template <typename t> t min(t a, t b)
{
    return a < b ? a : b;
}

template <typename t> t max(t a, t b)
{
    return a > b ? a : b;
}

