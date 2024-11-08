/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:47:29 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/06 22:10:40 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  zomb;
    Zombie  *zomb_ptr;

    zomb.setName("Daddy");
    zomb.announce();
    zomb_ptr = newZombie("Mommy");
    zomb_ptr->announce();
    randomChump("Test");
    delete (zomb_ptr);
}