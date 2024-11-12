/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:50:31 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/11 22:32:41 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	call_complain( std::string str )
{
	Harl	obj;

	std::cout << "[ " << str << " ]" << std::endl;
	obj.complain(str);
}

int	main (int argc, char **argv)
{
	if (argc != 2)
		return std::cout << "Wrong number of arguments." << std::endl, 0;
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && (argv[1] != levels[i]))
		i++;
	switch (i)
	{
		case 0:
			call_complain("DEBUG");
		case 1:
			call_complain("INFO");
		case 2:
			call_complain("WARNING");
		case 3:
			call_complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems. ]" << std::endl;
	}
	return (0);
}
