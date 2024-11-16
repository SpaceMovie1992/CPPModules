/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:46:23 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/16 21:06:48 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "[FragTrap] " << _name << " is on duty with " << _hitPoints << " HP and " << _energyPoints << " EP." << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] " << _name << " has been destroyed." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] " << _name << " wants a high five!" << std::endl;
}

// FragTrap::FragTrap(const FragTrap &other) : ScavTrap(other)
// {
// 	std::cout << "[FragTrap] " << _name << " has been cloned." << std::endl;
// 	*this = other;
// }

// FragTrap &FragTrap::operator=(const FragTrap &other)
// {
// 	std::cout << "[FragTrap] " << _name << " has been assigned." << std::endl;
// 	if (this != &other)
// 	{
// 		ClapTrap::operator=(other);
// 	}
// 	return (*this);
// }
