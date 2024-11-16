/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:51:25 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/16 20:59:52 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"
# include <string>

class	ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap	&operator=(const ScavTrap &other);
	~ScavTrap();

	void	guardGate();
};
