/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:35:15 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/07 16:56:31 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *horde = zombieHorde(10, "Daddy");

    horde[0].announce();
    horde[8].announce();
    delete[] (horde);
}