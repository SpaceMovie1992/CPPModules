/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:51:05 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/16 20:59:33 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	ClapTrap
{
protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap	&operator=(const ClapTrap &other);
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
