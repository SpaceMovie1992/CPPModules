/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:08:42 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/07 17:22:18 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Addresses:" << std::endl;
    std::cout << "\tstr: " << &str << std::endl;
    std::cout << "\tstringPTR: " << stringPTR << std::endl;
    std::cout << "\tstringREF: " << &stringREF << std::endl;

    std::cout << "Values:" << std::endl;
    std::cout << "\tstr: " << str << std::endl;
    std::cout << "\tstringPTR: " << *stringPTR << std::endl;
    std::cout << "\tstringREF: " << stringREF << std::endl;
    
    return (0);
}