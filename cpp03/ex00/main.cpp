/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:04:17 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/14 18:11:54 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	robot("R2D2");

	robot.attack("Target1");
	robot.takeDamage(5);
	robot.beRepaired(3);
	robot.attack("Target2");
	robot.takeDamage(10);
	robot.beRepaired(5);
	return (0);
}
