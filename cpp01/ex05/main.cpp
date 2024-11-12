/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:18:35 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/09 21:21:09 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl_obj;

	harl_obj.complain("DEBUG");
	harl_obj.complain("INFO");
	harl_obj.complain("WARNING");
	harl_obj.complain("ERROR");
	harl_obj.complain("UNKNOWN");
}
