/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:00:54 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/07 20:03:16 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): _type("") {};
Weapon::Weapon(std::string type): _type(type) {};
Weapon::~Weapon() {};

const std::string &Weapon::getType(void) const 
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
