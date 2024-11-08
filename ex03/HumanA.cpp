/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:37:18 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/08 16:59:53 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {};

HumanA::~HumanA() {};

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

Weapon  HumanA::getWeapon(void) const
{
    return (*(this->_weapon));
}

std::string HumanA::getName(void) const
{
    return (this->_name);
}

void    HumanA::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanA::setName(std::string name)
{
    this->_name = name;
}
