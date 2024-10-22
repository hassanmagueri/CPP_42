/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NULLToString.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:23:52 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/20 18:54:45 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class C
{
public:
    const std::string _str;
    
    std::string setStr(char *str)
    {
        if (str == NULL)
            throw "Exception: NULL";
        return std::string(str);
    }

    C(char *str) : _str(setStr(str)) {   }
    C(int) { throw "Exeption: int"; }
    
    C(long): _str("")
    {
        throw "Exception: long";
    }
    
    C(std::string str) : _str(str) {  }
};

// class C
// {
// public:
//     const std::string _str;
    
//     C(char *str) { throw "Exeption: NULL"; }
//     C(const char *str) : _str(str) {  }
//     C(std::string str) : _str(str) {  }
// };

int main()
{
    try
    {
        const char *p = "asdasd";
        C obj = C(0);
        std::cout << obj._str << std::endl;
        // C obj = C();
    }
    catch(char const *e)
    {
        std::cerr << e << std::endl;
    }
}
