/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:59:26 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/15 19:59:35 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "[ScavTrap] " << _name << " is on duty with " << _hitPoints << " HP and " << _energyPoints << " EP." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "[ScavTrap] " << _name << " has been cloned." << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "[ScavTrap] " << _name << " has been assigned." << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] " << _name << " has been destroyed." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "[ScavTrap] " << _name << " is now in gatekeeper mode." << std::endl;
}
