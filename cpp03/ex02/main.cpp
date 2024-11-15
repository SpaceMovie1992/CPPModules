/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:44:42 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/15 20:45:32 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("Fraggy");

	frag.attack("target");
	frag.takeDamage(50);
	frag.beRepaired(30);
	frag.highFivesGuys();

	std::cout << "----------------------------------------" << std::endl;

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
