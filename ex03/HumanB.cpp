/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:00:00 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/08 17:04:09 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {};

HumanB::~HumanB() {};

void    HumanB::attack(void)
{
    if(_weapon)
        std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << this->_name << " cant attack without a weapon" << std::endl;
}

Weapon  HumanB::getWeapon(void) const
{
    return (*(this->_weapon));
}

std::string HumanB::getName(void) const
{
    return (this->_name);
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::setName(std::string name)
{
    this->_name = name;
}
