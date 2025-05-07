/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:41:19 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/05 20:37:40 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

typedef std::vector<int>::iterator TIt;

class Span
{
	private:
	unsigned int N;
	std::vector<int> sp;

	public:
	Span();
	Span(Span &other);
	Span &operator=(Span &other);
	~Span();

	Span(unsigned int n);
	void addNumber(int num);

	int shortestSpan();

	int longestSpan();

	int addRang(TIt begin, TIt end);

	// iterator_range;
	
};
