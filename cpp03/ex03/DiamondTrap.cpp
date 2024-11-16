/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:47:12 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/16 20:56:52 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "[DiamondTrap] " << _name << " has been created with "
		<< _hitPoints << " HP, " << _energyPoints << " EP and "
		<< _attackDamage << " attack damage!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] " << _name << " has been destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "[DiamondTrap] I am " << _name << " , also known as "
		<< ClapTrap::_name << "." << std::endl;
}
