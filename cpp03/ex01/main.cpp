/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:47:23 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/15 19:50:36 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap scav("Scavvy");
	scav.attack("target");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();

	std::cout << "----------------------------------------" << std::endl;

	ClapTrap clap("Clappy");
	clap.attack("target");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "----------------------------------------" << std::endl;

	return 0;
}
