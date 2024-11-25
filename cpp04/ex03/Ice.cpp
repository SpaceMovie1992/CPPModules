/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:24:43 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/24 17:25:00 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy assignment operator called." << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}

Ice	*Ice::clone() const
{
	std::cout << "Ice clone called." << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
