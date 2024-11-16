/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:51:15 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/16 20:59:40 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"
# include <string>

class	FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap	&operator=(const FragTrap &other);
	~FragTrap();

	void	highFivesGuys(void);
};
