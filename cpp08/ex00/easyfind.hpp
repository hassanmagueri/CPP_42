/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:40:00 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/05 18:40:01 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <list>
#include <map>
#include <algorithm>

template <typename T>

typename T::iterator easyfind(T cont, int n)
{
    // make sure its a container
    return (std::find(cont.begin(),cont.end(), n));
}
