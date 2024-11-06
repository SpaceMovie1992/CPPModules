/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:57:08 by ahusic            #+#    #+#             */
/*   Updated: 2024/10/27 16:24:06 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    
    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < ac)
        {
            j = 0;
            while (av[i][j] != '\0')
            {
                std::cout << (char)std::toupper(av[i][j]);
                j++;
            }
            std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}