/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:04:32 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/08 17:17:46 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon  weapon = Weapon("M4A1");
        HumanA  me("Me", weapon);
        me.attack();
        weapon.setType("some other gun");
        me.attack();
    }
    
    {
        Weapon  weapon = Weapon("M4A1");
        HumanB  you("You");
        you.setWeapon(weapon);
        you.attack();
        weapon.setType("some other gun");
        you.attack();
    }
    return (0);
}