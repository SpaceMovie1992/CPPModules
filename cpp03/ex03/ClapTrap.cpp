/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:45:55 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/16 16:45:57 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] " << _name << " fights with " << _hitPoints << " HP and " << _energyPoints << " EP." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "[ClapTrap] " << _name << " is copied." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "[ClapTrap] " << _name << " assigned" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] " << _name << " has been destroyed." << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "[ClapTrap] " << _name << " attacks " << target << " dealing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "[ClapTrap] " << _name << " to weak to attack." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "[ClapTrap] " << _name << " takes " << amount << " points of damage. Remaining HP: " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << "[ClapTrap] " << _name << " is repaired by " << amount << " points. Remaining HP: " << _hitPoints << std::endl;
	}
	else
	{
		std::cout << "[ClapTrap] " << _name << " is too weak to be repaired." << std::endl;
	}
}
