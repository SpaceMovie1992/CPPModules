/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:36:00 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/06 22:36:52 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::Zombie(std::string name): _name(name) {};

Zombie::~Zombie()
{
    std::cout << "Destroyed: " << _name << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string   Zombie::getName(void)
{
    return (this->_name);
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}
