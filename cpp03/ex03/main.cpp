/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:46:44 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/16 21:10:42 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Diamond");

	std::cout << "----------------------------------------" << std::endl;

	diamond.attack("Target");
	std::cout << std::endl;
	diamond.takeDamage(50);
	std::cout << std::endl;
	diamond.beRepaired(30);
	std::cout << std::endl;
	diamond.highFivesGuys();
	std::cout << std::endl;
	diamond.guardGate();
	std::cout << std::endl;
	diamond.whoAmI();

	std::cout << "----------------------------------------" << std::endl;

	return 0;
}
