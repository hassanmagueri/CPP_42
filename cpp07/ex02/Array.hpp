/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:49:50 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/05 15:49:51 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

template <typename T>
class Array
{
    private:
    
    T *arr;
    unsigned int len;

    public:

    Array():len(0)
    {
        arr = new T();
    }

    ~Array()
    {
        delete[] arr;
    }

    Array(unsigned int n):len(n)
    {
        arr = new T[n]();
    }

    Array(const Array &other): len(other.len)
    {
        this->arr = new T[len];
        for (unsigned int i = 0; i < this->len; i++)
            this->arr[i] = other.arr[i];
    }

    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] arr;
            this->arr = new T[other.len];
            this->len = other.len;
            for (unsigned int i = 0; i < this->len; i++)
                this->arr[i] = other.arr[i];
        }
        return *this;
    }

    T &operator[](size_t i)
    {
        if (i >= len)
            throw std::runtime_error("index out of range");
        return arr[i];
    }

    const T &operator[](size_t i) const
    {
        if (i >= len)
            throw std::runtime_error("index out of range");
        return arr[i];
    }

    unsigned int size() const
    {
        return len;
    }

};
